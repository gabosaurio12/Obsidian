## Conectarse a una red wifi con iw y wpa_supplicant

**1. Verificar la interfaz WAN:**

```
$ iw dev
```

**O**

```
$ iwconfig
```

**2. Activar la interfaz:**

```
$ sudo ip link set <interfaz-inalámbrica> up
```

**3. Escanear redes:**

```
$ sudo iw <interfaz-inalámbrica> scan
```

**- Se puede usar grep para buscar una red específica o el SSID**

```
$ sudo iw <interfaz-inalámbrica> scan | grep SSID
```

**4. Generar configuración:**

```
$ wpa_passphrase "SSID-Red" "Contraseña" | sudo tee /etc/wpa_supplicant/wpa_supplicant.conf
```

**5. Ejecutar *wpa_supplicant*:**

```
$ sudo wpa_supplicant -B -i <interfaz-inalámbrica> -c /etc/wpa_supplicant/wpa_supplicant.conf
```

**4. Obtener IP con DHCP:**

```
$ sudo dhclient wlan0
```
