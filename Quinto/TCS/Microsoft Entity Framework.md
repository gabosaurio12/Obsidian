Es un **ORM** (Object Relational Mapper) propuesto por Microsoft para .Net. Un **ORM** es una técnica de desarrollo de software que mapea los objetos de un programa y las tablas de una base de datos.
Ayuda a los desarrolladores a trabajar directamente con objetos en el código y evitar tener que traducir manualmente esos objetos a consultas SQL, eliminando así la necesidad de hacer operaciones CRUD manualmente.
El propósito de Entity Framework es simplificar el acceso y manipulación de bases de datos para .Net.
## Comparación
### SQL
```
SELECT * FROM users WHERE username = "gabosaurio";
```
### EF
```
var users = db.users.Where(u => u.username == "gabosaurio").ToList();
```
## Data Provider
Un Data Provider en Entity Framework es el puente entre EF y un motor de base de datos, sin uno no pueden comunicarse.
Este se encarga de traducir las consultas de LINQ/Entity SQL a instrucciones SQL que el motor pueda comprender y no solo eso, también las ejecuta y convierte los resultados en objetos .Net que EF pueda usar.
## Arquitectura
1. **Data Providers**
2. **Entity Client**
	- Capa en la que se exponen las entidades en forma de filas y columnas sin tener que generar clases todavía
	- Se pueden realizar consultas con Entity SQL
	- Es una interfaz entre los Data Providers y las capas del Entity Data Model
3. **Object Services**
	- Es la capa **ORM** de EF
	- Permite usar operaciones CRUD directamente con las entidades
	- Mapea claves primarias y foráneas
	- Permite un seguimiento de datos
	- Ejecuta consultas con LINQ y EntitySQL
## Diferencia entre Lazy Loading y Eager Loading en EF
### Lazy Loading
- Solo se cargan las entidades relacionadas cuando se acceden a ellas por primera vez
- Se cargan durante la ejecución por demanda
- Genera consultas adicionales cada vez que se accede a una relación
- Usa menos memoria que **Eager Loading** pero puede generar múlitples consultas a la BD
- Puede ser lento si se acceden a muchas relaciones una por una
- Se usan propiedades para navegar (user.username)
- Se usa cuando se desea ahorrar memoria y no siempre se encesitan datos relacionados
### Eager Loading
- Las entidades relacionadas se cargan inmediatamente junto con la entidad principal
- Se carga al momento de ejecutar la consulta inicial
- Solo se genera una consulta la cual incluye relaciones
- Puede llegar a usar más memoria por la carga completa pero evita varias consultas
- Es rápido si se necesitan varias relaciones desde el inicio
- Se usa include()
	- db.users.Include(u => u.username)ToList()
- Se recomienda usarlo cuando se necesitan datos relacionados desde el principio
## Diferencia entre Model First, Code First y Database First
### Model First
- Se diseña un diagrama y EF genera la base de datos basándose en el
- Si se modifica el diagrama se sincroniza con la base de datos
- Tiene una flexibilidad media, depende del diseñador
- Se usa Visual Designer de EF
### Code First
- Se escriben las clases en C# y EF genera la base de datos a partir de ellas
- Se actualiza la base de datos modificando las clases
- Se recomienda para proyectos centrados en código
- Tiene una flexibilidad alta porque se controla todo por código
- Se usan clases y migraciones de EF
### Database First
- A partir de una base de datos existente, EF genera las clases
- Se actualiza el modelo cambiando la base de datos
- Se recomienda con proyectos legacy o con una base de datos ya creada
- Tiene una flexibilidad baja ya que depende de una estructura existente
- Se usa EF Designer