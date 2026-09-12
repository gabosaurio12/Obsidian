**Estudiantes:**
- Gabriel Antonio González López
- Seth Márquez Rodríguez
## Crear máquinas manualmente
### Detalles

Se crearán 3 máquinas virtuales de ubuntu server:
- Ubuntu-Figurasqe-PSQL
	- Base de datos
- Ubuntu-Figurasqe-Data
	- Servicio de datos
- Ubuntu-Figurasqe-Auth
	- Servicio de Autorización y Autenticación
### Creación de máquinas virtuales manual
- Ubunut-Figurasqe-PSQL
	- Vm para base de datos
	- figurasqe-psql
	- login: fqe-psql
	- pass: figurasqe123
	- Credenciales psql
		- pass: postgres
	- Tiempo aproximado de instalación: 1:30hrs
		- Ubuntu Server
		- Docker
		- Postgres16 container
		- Carga de base de datos
- Ubuntu-Figurasqe-Data
	- Servicio de datos
	- name: fqe-data
	- username:fqe-data
	- figurasqe123
	- Tiempo aproximado de instalación 00:30hrs
		- Ubuntu Server
		- .NET 10
		- ASP.NET-CORE 10
- Ubuntu-Figurasqe-Auth
	- name: fqe-auth
	- username:fqe-auth
	- figurasqe123
	- Tiempo aproximado de instalación 00:30hrs
		- Ubuntu Server
		- .NET 10
		- .NET 9
		- ASP.NET-CORE 10
		- ASP.NET-CORE 9
### Creación de máquinas virtuales con vagrant
#### Ubuntu-Figurasqe-PSQL
Tiempo aproximado de instalación 30 min
vagrant file
```
Vagrant.configure("2") do |config|

config.vm.box = "perk/ubuntu-2204-arm64"

config.vm.synced_folder ".", "/vagrant", disabled: true

  

config.vm.provider "qemu" do |qe|

qe.cpus = 2

qe.memory = "2048"

qe.arch = "aarch64"

qe.machine = "virt,highmem=on"

qe.cpu = "cortex-a72"

qe.ssh_port = "50022"

end

  

config.vm.provision "shell", inline: <<-SHELL

if ! command -v puppet &> /dev/null; then

apt-get update

apt-get install -y puppet

fi

SHELL


end
```

puppet manifest
```
Exec { path => [ '/bin/', '/sbin/' , '/usr/bin/', '/usr/sbin/' ] }

package { 'docker.io':
    ensure => installed,
    before => Service['docker'],
}

service { 'docker':
    ensure => running,
    enable => true,
}

exec { 'postgres_container':
    command => 'docker run -d --name pg-figurasqe -e POSTGRES_PASSWORD=1234 -p 5432:5432 postgres:16',
    unless => 'docker ps -a | grep pg-figurasqe',
    require => Service['docker'],
}
```

Base de datos corriendo
![[Captura de pantalla 2026-05-13 a la(s) 10.56.47 a.m..png]]
#### Ubuntu-Figurasqe-Data
- Tiempo aproximado de instalación 1hr
vagrant file
```
Vagrant.configure("2") do |config|

config.vm.box = "perk/ubuntu-2204-arm64"

config.vm.synced_folder ".", "/vagrant", disabled: true

  

config.vm.provider "qemu" do |qe|

qe.cpus = 2

qe.memory = "2048"

qe.arch = "aarch64"

qe.machine = "virt,highmem=on"

qe.cpu = "cortex-a72"

qe.ssh_port = "50022"

end

  

config.vm.provision "shell", inline: <<-SHELL

if ! command -v puppet &> /dev/null; then

apt-get update

apt-get install -y puppet

fi

SHELL

end
```

puppet manifest
```
Exec { path => [ '/bin/', '/sbin/', '/usr/bin/', '/usr/sbin/' ] }

package { ['curl', 'wget', 'git', 'apt-transport-https', 'gnupg', 'software-properties-common']:
  ensure => installed,
}

exec { 'add_dotnet_backports_data':
  command => 'add-apt-repository -y ppa:dotnet/backports',
  unless  => 'grep -q "dotnet-ubuntu-backports" /etc/apt/sources.list.d/*',
  require => Package['software-properties-common'],
}

exec { 'apt_update_data':
  command => 'apt-get update',
  require => Exec['add_dotnet_backports_data'],
}

package { ['dotnet-sdk-10.0', 'aspnetcore-runtime-10.0']:
  ensure  => installed,
  require => Exec['apt_update_data'], # Asegura el "apt-get update" previo
}

exec { 'clone_repo_data':
  command => 'git clone https://github.com/seth-mr/FiguerasQueEnse-anBD.git /home/vagrant/FigurasQE-DataService',
  creates => '/home/vagrant/FigurasQE-DataService/.git',
  require => Package['git'],
}

file { '/home/vagrant/FigurasQE-DataService':
  ensure  => directory,
  owner   => 'vagrant',
  group   => 'vagrant',
  mode    => '0755',
  require => Exec['clone_repo_data'],
}
```

Servicio corriendo
![[Captura de pantalla 2026-05-13 a la(s) 10.32.03 a.m..png]]
#### Ubuntu-Figurasqe-Auth
- Tiempo aproximado de instalación 30 min
vagrant file
```
Vagrant.configure("2") do |config|

config.vm.box = "perk/ubuntu-2204-arm64"

config.vm.synced_folder ".", "/vagrant", disabled: true

  

config.vm.provider "qemu" do |qe|

qe.cpus = 2

qe.memory = "2048"

qe.arch = "aarch64"

qe.machine = "virt,highmem=on"

qe.cpu = "cortex-a72"

qe.ssh_port = "50022"

end

  

config.vm.provision "shell", inline: <<-SHELL

if ! command -v puppet &> /dev/null; then

apt-get update

apt-get install -y puppet

fi

SHELL

end
```

puppet manifest
```
Exec { path => [ '/bin/', '/sbin/', '/usr/bin/', '/usr/sbin/' ] }

# 1. Asegurar dependencias para repositorios PPA
package { 'software-properties-common':
  ensure => installed,
}

exec { 'add_dotnet_backports':
  command => 'add-apt-repository -y ppa:dotnet/backports',
  unless  => 'grep -q "dotnet-ubuntu-backports" /etc/apt/sources.list.d/*',
  require => Package['software-properties-common'],
}

exec { 'apt_update_backports':
  command => 'apt-get update',
  require => Exec['add_dotnet_backports'],
}

package { 'dotnet-sdk-9.0':
  ensure  => installed,
  require => Exec['apt_update_backports'], # Forzar a que se instale DESPUÉS del update
}

exec { 'clone_repo_auth':
  command => 'git clone https://github.com/gabosaurio12/FigurasQE-AuthenticationService.git /home/vagrant/FigurasQE-AuthenticationService',
  creates => '/home/vagrant/FigurasQE-AuthenticationService/.git',
}

file { '/home/vagrant/FigurasQE-AuthenticationService':
  ensure  => directory,
  owner   => 'vagrant',
  group   => 'vagrant',
  mode    => '0755',
  require => Exec['clone_repo_auth'],
}
```

Servicio corriendo
![[Captura de pantalla 2026-05-13 a la(s) 10.50.36 a.m..png]]
## Conclusión
Aunque los tiempos puedan llegar a ser similares entre hacerlo manual y hacerlo con vagrant, vagrant resulta mucho más sencillo y menos tedioso por ser un flujo con menos obstáculos.

Vagrant+Puppet facilitan mucho las instalaciones tediosas donde se deben ejecutar múltiples comandos seguidos al momento de la instalación y se ahorra tiempo instalando paquetes básicos o de desarrollo.

Los 30 minutos de tiempo aproximado de instalación en vagrant podrían disminuir mucho destinando más ram o núcleos de cpu a las VM, ya que actualmente se están usando en el mínimo.