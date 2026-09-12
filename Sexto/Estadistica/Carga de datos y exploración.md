## Por qué Python para análisis de datos
- Como otros lenguajes de script (Ruby, Perl, R) pueden ser usados para escribir pequeños programas o scripts para algunas tareas
- Muchas bibliotecas
- Ha desarrollado un gran y activo grupo de cómputo científico y análisis de datos
- Compite con otros lenguajes de código abierto y comerciales como R, MATLAB, SAS Stata y otros
- Es un lenguaje para producción (como Java, C/C++)
## Desventajas
- Es un intérprete por lo que es lento
## Anaconda
- Es una distro que provee un intérprete de Python junto con una lista de paquetes y herramientas como editores
- Incluye paquetes y el editor Spyder
## Spyder
- Es un entorno poderoso e interactivo de desarrollo para el lengauje Python con características avanzadas de edición, pruebas y depuración
- Deriva de **S**cientific **Py**thon **Dev**elopment (SPyDev)
## Bibliotecas
### Numpy
- Permite manejar números y matrices (o vectores) de mejor manera
### Pandas
- Proporciona estructuras y funciones de alto nivel diseñadas para hacer el trabajao con datos estructurados o tabulares más fácil, rápido y expresivo
- Objetos principales:
	- Los DataFrame: Estructura tabular con etiquetas en filas y columnas
	- Las Series: Arreglo de una dimensión etiquetado
### Matplobtlib
- Biblioteca más popular para producir gráficos y visualizaciones de datos en dos dimensiones
- Más utilizadas en publicaciones científicas
- Buena intrgración con otros editores (Latex)
### SciPy
- Colección de paquetes para manejar un conjunto de problemas de dominios es´tandar en el cómputo científico
- Scipy.integrate: rutinas para manejar ecuaciones integrales y diferenciales
- Scipy.linalg: ruitnas de álgebra lineal y descomposición de matrices
- Scipy.signal: Herramientas para procesar señales
- Scipy.optimize: Optimizadores (minimización y maximización)
- Scipy.stats: Distribuciones estándar de probabilidad continuas y discretas (funciones de densidad, muestreo), pruebas estadísticas y estadísticas descriptivas
### Sickit-learn
- Clasificación: SVM, nearest neighbors, random forest, ligistic regression
- Regresión: Lasso, ridge regresión, etc.
- Clustering: K-means, spectral clustering
- Reducción de dimensionalidad: PCA, Feature selection, etc.
- Selección de modelos: Grid search, cross validation metrics, etc.
- Preprocesamiento: Feature extraction, normalization
## Data Frames
- Representa una tabla rectangular de datos y continene una colección ordenada de columnas, cada una puede tener diferente tipo
- Tiene indices tanto en filas como en columnas
### Funciones útiles
- Si el DataFrame es muy grande, con la función head() muestra los primeros 5 elementos
- O el comando tail() que muestra los últimos 5
- Con un parámetro se define cuántos carga