<!DOCTYPE html>
<html lang="es">
<head>
<meta charset="UTF-8">
<title>SQL Server Cheat Sheet</title>
</head>
<body>

<h1>SQL Server Cheat Sheet (Mini)</h1>

<h2>1️⃣ Conectar a la base de datos</h2>
<pre><code>
-- Abrir SQLCMD en Docker
docker exec -it mssql /opt/mssql-tools/bin/sqlcmd -S localhost -U SA -P "TuPassword"

-- O dentro de SQL Server Management Studio (SSMS)
-- Conéctate al servidor, luego abre una nueva query
</code></pre>

<h2>2️⃣ Mostrar bases de datos</h2>
<pre><code>
-- Listar todas las bases de datos
SELECT name FROM sys.databases;

-- Usar una base de datos específica
USE NombreBaseDeDatos;
</code></pre>

<h2>3️⃣ Crear tabla</h2>
<pre><code>
CREATE TABLE Personas (
    Id INT IDENTITY(1,1) PRIMARY KEY,  -- Auto increment
    Nombre NVARCHAR(50),
    Edad INT
);
</code></pre>

<h2>4️⃣ Insertar datos</h2>
<pre><code>
INSERT INTO Personas (Nombre, Edad)
VALUES ('Gabo', 22),
       ('Ana', 25);
</code></pre>

<h2>5️⃣ Consultar datos</h2>
<pre><code>
-- Seleccionar todo
SELECT * FROM Personas;

-- Seleccionar solo algunos campos
SELECT Nombre, Edad FROM Personas;

-- Filtrar
SELECT * FROM Personas WHERE Edad &gt; 23;
</code></pre>

<h2>6️⃣ Relaciones y Foreign Keys</h2>
<pre><code>
CREATE TABLE Pedidos (
    Id INT IDENTITY(1,1) PRIMARY KEY,
    PersonaId INT,
    Producto NVARCHAR(50),
    CONSTRAINT fk_persona FOREIGN KEY (PersonaId) REFERENCES Personas(Id)
);
</code></pre>

<h2>7️⃣ Actualizar y eliminar</h2>
<pre><code>
-- Actualizar
UPDATE Personas
SET Edad = 23
WHERE Nombre = 'Gabo';

-- Eliminar
DELETE FROM Personas
WHERE Nombre = 'Ana';
</code></pre>

<h2>8️⃣ Otros comandos útiles</h2>
<pre><code>
-- Ver tablas de la base de datos actual
SELECT TABLE_NAME FROM INFORMATION_SCHEMA.TABLES
WHERE TABLE_TYPE = 'BASE TABLE';

-- Describir tabla
EXEC sp_columns Personas;
</code></pre>

</body>
</html>
