16 de septiembre del 2026
Gabriel Antonio González López
## Introducción

Entity Framework es un conjunto de tecnologías en ADO.NET que soporta el desarrollo de Aplicaciones de Software Orientadas a la Información (data-oriented).

Es un ORM (Object Relational Mapper) que es una herramienta que simplifica el mappeo de objetos en el software de las tablas y columnas de una base de datos relacional.
## Propósito de Microsoft Entity Framework

Permitir a los desarrolladores trabajar con información como si fueran objetos de dominio específicos y propiedades sin tener que preocuparse con las tablas y columnas en donde la información está guardada.

Con Entity Framework, los desarrolladores pueden trabajar a un nivel más alto de abstracción cuando trabajan con información y pueden crear y mantener aplicaciones orientadas a la información (data-oriented) con menos código que aplicaciones tradicionales.
## ¿Cuál es la finalidad de utilizar Object Relational Mappers para la construcción de aplicaciones?

No depender del motor de base de datos (SQL Server, MySQL, PostgreSQL, etc.) para construir alrededor de él con bibliotecas específicas, sino construir la aplicación y que el ORM se encargue de adaptarlo al motor.

Esto también permite poder cambiar de motor de base de datos si es necesario sin tener que cambiar todo el código fuente.
## ¿Cuál es la arquitectura de Entity Framework y el propósito de cada capa?

![[image 36.png]]
### Data Provider
Son provedores específicos del sistema de almacenamiento que implementan las interfaces de ADO.NET que son necesarias para comunicarse con el DBMS.

Reciben las operaciones generadas por Entity Framework y las traducen a consultas y comandos específicos del motor de base de datos para ejecutarlas.
### Entity Client
La capa de Entity Client expone la capa de entidad a la capa superior. Provee a los desarrolladores la capacidad de trabajar en entidades como si fueran filas y columnas usando consultas SQL sin la necesidad de generar clases para representar el schema conceptual.
### Object Service
Es el contexto de objeto, representa la sesión e interacción entre las aplicaciones y la fuente de información (data source).
- El uso principal del Object Context es llevar a cabo diferentes operaciones como agregar y borrar instancias de entidades y guardar el estado cambiado a la base de datos con ayuda de las consultas
- La capa ORM representa el resultado de la información a las instancias objeto de las entidades
- Estos servicios permiten al desarrollador utilizar algunas de las funcionalidades de los ORM como mappeo de llaves primarias, cambiar el tracking, etc. escribiendo consultas utilizando LINQ y Entidades SQL.
### En resumen
Entity Framework (EF) funciona como un traductor entre la aplicación y la base de datos.
La aplicación le pide a EF por ejemplo: "selecciona todos los pokémon" usando LINQ y el flujo es así:
1. **Object Services** recibe la petición y trabaja con los objetos de nuestra aplicación
2. **Entity Client** ayuda a convertir esa petición para que EF pueda trabajar con el modelo de datos
3. **Entity Data Model (EDM)** sirve como un mapa que relaciona los objetos de la aplicación con las tablas de la base de datos
4. **Data Provider** traduce la petición al lenguaje que entiende la base de datos (como SQL)
5. El **DBMS** (como SQL Server o PostgreSQL) ejecuta la consulta, en este caso devuelve los datos (pokémon)
6. EF hace el camino de regreso y convierte esos datos en objetos que la aplicación puede utilizar

Entonces, mientras los desarrolladores hablan en objetos y LINQ la base de datos habla en SQL y tablas, y EF es el traductor.
## Cuál es la diferencia entre Lazy loading y Eager loading en Entity Framework

### Eager Loading
Es el proceso en el que una consulta para una sola entidad carga todas las entidades relacionadas como parte de la consulta, de esta forma no se necesita ejecutar una consulta aparte para las entidades relacionadas. Se utiliza el método **Include()**, como se muestra en el ejemplo:

Para una consulta LINQ:
```
using (var context = new SchoolDBEntities())
{
	var student = (from s in context.Students.Include("Standard")
				  where s.StudentName == "Bill"
				  select s).FirstOrDefault<Student>();
}
```

Para un método LINQ:
```
using (var context = new SchoolDBEntities())
{
	var student = context.Students
                         .Include("Standard")
                         .Where(s => s.StudentName == "Bill")
                         .FirstOrDefault<Student>();
}
```

Esas consultas LINQ darán como resultado esta consulta SQL:
```
SELECT TOP(1)
[Extent1].[StudentID] AS [StudentID], 
[Extent1].[StudentName] AS [StudentName], 
[Extent2].[StandardId] AS [StandardId], 
[Extent2].[StandardName] AS [StandardName], 
[Extent2].[Description] AS [Description]
FROM  [dbo].[Student] AS [Extent1]
LEFT OUTER JOIN [dbo].[Standard] AS [Extent2] ON [Extent1].[StandardId] = [Extent2].[StandardId]
WHERE 'Bill' = [Extent1].[StudentName]
```
### Lazy Loading
Este tipo de carga es retrasar la carga de la información relacionada hasta que específicamente sea solicitada. Es lo opuesto a Eager Loading.
Por ejemplo, la entidad *Student* contiene la entidad*StudentAddress*, con lazy loading, el contexto carga primero *Student* desde la base de datos y luego *StudentAddress* cuando accedemos a la propiedad. Este es un ejemplo:

```
using (var context = new SchoolDBEntities())
{
	IList<Student> students = context.Students.ToList<Student>();
	
	Student student = students[0];
	
	StudentAddress add = student.StudentAddress;
}
```

Ese código dará como resultado la siguiente consulta SQL:
```
SELECT
[Extent1].[StudentID] AS [StudentID], 
[Extent1].[StudentName] AS [StudentName], 
[Extent1].[StandardId] AS [StandardId]
FROM [dbo].[Student] AS [Extent1]
```

Y luego mandará esta dconsulta cuando referenciemos a *StudentAddress*:
```
exec sp_executesql N'SELECT
[Extent1].[StudentID] AS [StudentID], 
[Extent1].[Address1] AS [Address1], 
[Extent1].[Address2] AS [Address2], 
[Extent1].[City] AS [City], 
[Extent1].[State] AS [State]
FROM [dbo].[StudentAddress] AS [Extent1]
WHERE [Extent1].[StudentID] = @EntityKeyValue1',N'@EntityKeyValue1 int',@EntityKeyValue1=1
```

#### Desactivar lazy loading
Se puede desactivar lazy loading para una entidad o contexto específico utilizando una propiedad, no haciéndola virtual. Para desactivar lazy loading a todas las entidades en el contexto, se debe configurar la propiedad a *false*:
```
public partial class SchoolDBEntities : DBContext
{
	public SchoolDbEntities(): base("name=SchoolDBEntities")
	{
		this.Configuration.LazyLoadingEnabled = false;
	}
	
	protected override void OnModelCreating(DbModelBuilder modelBuidler)
	{
	}
}
```

#### Reglas para lazy loading
1. *context.Configuration.ProxyCreationEnabled* debe ser *true*
2. *context.Configuration.LazyLoadingEnabled* debe ser *true*
3. La propiedad *Navigation* debe estar definida como public, virtual . El context no hará lazy loading si la propiedad no está definida como virtual
### En resumen

| Lazy Loading                                           | Eager Loading                                              |
| ------------------------------------------------------ | ---------------------------------------------------------- |
| Carga la información relacionada hasta que se necesita | Carga la información relacionada desde la primera consulta |
| Se puede desactivar                                    | Solo funciona si se llama de forma explícita (Include())   |
## Cuál es la diferencia entre Model First, Code First y Database First para el mapeo de una base de datos utilizado Entity Framework

### Code First
- Este flujo de trabajo apunta a una base de datos que todavía no existe y CodeFirst la creará.
- Puede ser usada si una base de datos está vacía y luego CodeFirst agregará tablas nuevas también.
- CodeFirst permite definir el modelo utilizando clases de C# o VB.Net.
- La configuración adicional puede realizarse utilizando atributos en las clases y propiedades o usando una API.
### Model First
- Es bueno cuando se está comenzando un proyecto nuevo y la base de datos aún no existe.
- El modelo es guardado en un archivo EDMX y se puede ver y editar en el EF Designer.
- Se define el model en EF Designer, luego se genera el SQL que creará el schema de bse de datos para que concuerde con el modelo y luego se debe ejecutar el SQL para crear el schema en la base de datos.
- Las clases con las que se interactúa con tu aplicación son generadas automáticamente desde el EDMX.
### Database First
- Es una alternativa al CodeFirst y ModelFirst.
- Crea modelos de código (clases, propiedades, DbContext, etc.) desde la base de datos en el proyecto y esas clases se vuelven la conexión entre la base de datos y el controlador.
- Este acercamiento crea el EF desde una base de datos existente.
- Se utilizan funcionalidades como la sincronización de modelo/base de datos y la generación de código.
### En resumen

| Code First                                                              | Model First                                                                                                                                     | Database First                                                                                                                 |
| ----------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------ |
| Se crean scripts SQL mediante clases de C#                              | El modelo se guarda en un archivo EDMX para que EF genere un schema que coincida con el modelo que creará un script para crear la base de datos | Crea modelos de código desde una base de datos ya existente. Las clases generadas son la conexión entre la BD y el controlador |
| Es ideal cuando la base de datos no existe, porque Code First la creará | Es bueno cuando aún no existe la base de datos                                                                                                  | Es útil cuando una BD ya existe                                                                                                |
