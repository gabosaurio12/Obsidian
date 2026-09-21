Gabriel Antonio González López
27 de agosto del 2026
## Descripción del Proyecto

El **Kernel de Linux** es el componente central del sistema operativo Linux. Su función principal es actuar como intermediario entre el hardware de la computadora y el software, administrando los recursos del sistema y proporcionando los servicios necesarios para que las aplicaciones puedan ejecutarse.

Entre sus principales responsabilidades se encuentran la gestión de procesos, administración de memoria, comunicación entre procesos, control de dispositivos de hardware, manejo de redes y administración de sistemas de archivos. Además, proporciona mecanismos de seguridad, aislamiento y control de acceso para mantener un funcionamiento estable y seguro del sistema.

Linux es un proyecto de código abierto desarrollado de manera colaborativa por miles de desarrolladores y organizaciones alrededor del mundo. Su código fuente está escrito principalmente en lenguaje C, junto con componentes en C++, Rust, lenguaje ensamblador y otros lenguajes, y se distribuye bajo la licencia **GNU General Public License versión 2 (GPLv2)**.

Debido a su arquitectura, tamaño y amplia variedad de subsistemas, el Kernel de Linux es utilizado en una gran cantidad de dispositivos y sistemas, desde computadoras personales y servidores hasta dispositivos móviles, sistemas embebidos y supercomputadoras.

## Reglas de medición


- ¿Los comentarios se contarán como líneas de código?
	- No
- ¿Se incluirán líneas en blanco? 
	- No
- ¿Se analizarán todos los archivos?
	- NO
- ¿Se incluirán archivos de configuración?
	- En algunos casos
- ¿Se excluirá el código generado automáticamente?
	- NO
- ¿Qué periodo se utilizará para contar los commits?
	- Los del último mes
- ¿Qué se considerará un defecto, problema o alerta?
	- Algo que impida el funcionamiento correcto del sistema

## Tabla de resultados

![[image-2 1.png]]

## Evidencias

### Cloc

**Herramienta:** `github.com/AlDanial/cloc v 2.10`

**Tiempo de ejecución:** `108.06 s`  
**Velocidad:** `762.3 files/s`  
**Líneas procesadas:** `374141.0 lines/s`

| Lenguaje                   |   Archivos | Líneas en blanco |   Comentarios |         Código |   Escala | Equivalente 3ra generación |
| -------------------------- | ---------: | ---------------: | ------------: | -------------: | -------: | -------------------------: |
| C                          |     36,912 |        3,803,862 |     2,913,028 |     19,622,714 |     0.77 |              15,109,489.78 |
| C/C++ Header               |     26,696 |          790,390 |     1,598,862 |      8,400,023 |     1.00 |               8,400,023.00 |
| JSON                       |        834 |                2 |             0 |        553,644 |     2.50 |               1,384,110.00 |
| reStructuredText           |      4,011 |          197,931 |        81,995 |        540,837 |     1.50 |                 811,255.50 |
| YAML                       |      5,675 |          104,974 |        25,957 |        518,483 |     0.90 |                 466,634.70 |
| Assembly                   |      1,343 |           47,637 |        99,224 |        230,041 |     0.25 |                  57,510.25 |
| Bourne Shell               |      1,321 |           40,929 |        27,303 |        159,492 |     3.81 |                 607,664.52 |
| Rust                       |        473 |           15,268 |        52,835 |        114,481 |     1.00 |                 114,481.00 |
| Python                     |        428 |           21,163 |        18,928 |         90,224 |     4.20 |                 378,940.80 |
| Text                       |        975 |           19,725 |             0 |         89,640 |     0.50 |                  44,820.00 |
| make                       |      3,189 |           12,957 |        13,384 |         60,619 |     2.50 |                 151,547.50 |
| SVG                        |         87 |               98 |         1,311 |         56,094 |     1.00 |                  56,094.00 |
| Perl                       |         69 |            6,811 |         4,558 |         34,796 |     4.00 |                 139,184.00 |
| XML                        |         32 |            1,514 |           908 |         23,847 |     1.90 |                  45,309.30 |
| yacc                       |         10 |              723 |           442 |          4,848 |     1.51 |                   7,320.48 |
| PO File                    |          7 |            1,106 |         1,269 |          4,336 |     1.50 |                   6,504.00 |
| Bourne Again Shell         |         63 |              631 |           416 |          2,584 |     3.81 |                   9,845.04 |
| lex                        |         10 |              366 |           355 |          2,219 |     1.00 |                   2,219.00 |
| C++                        |          9 |              356 |           143 |          1,917 |     1.51 |                   2,894.67 |
| awk                        |         16 |              374 |           480 |          1,743 |     3.81 |                   6,640.83 |
| CSV                        |         11 |              126 |             0 |          1,413 |     0.10 |                     141.30 |
| Jinja Template             |        102 |               69 |            98 |            794 |     1.50 |                   1,191.00 |
| NAnt script                |          2 |              167 |             0 |            610 |     1.90 |                   1,159.00 |
| Logos                      |          4 |              115 |             0 |            547 |     2.00 |                   1,094.00 |
| Markdown                   |          9 |              162 |             3 |            513 |     1.00 |                     513.00 |
| XML (Qt/GTK)               |          1 |               50 |             0 |            486 |     2.00 |                     972.00 |
| XSD                        |          1 |               46 |             9 |            349 |     1.90 |                     663.10 |
| CSS                        |          4 |               70 |            96 |            244 |     1.00 |                     244.00 |
| Cucumber                   |          1 |               40 |            97 |            199 |     3.00 |                     597.00 |
| TeX                        |          1 |                6 |            73 |            155 |     1.50 |                     232.50 |
| TNSDL                      |          2 |               33 |             0 |            140 |     2.00 |                     280.00 |
| Windows Module Definition  |          2 |               20 |             0 |            137 |     1.00 |                     137.00 |
| Linker Script              |          5 |               25 |            11 |            126 |     1.00 |                     126.00 |
| Snakemake                  |          5 |               15 |            13 |            125 |     4.20 |                     525.00 |
| Clojure                    |         36 |                1 |             0 |             95 |     1.25 |                     118.75 |
| m4                         |          1 |               15 |             1 |             95 |     1.00 |                      95.00 |
| XSLT                       |          5 |               13 |            20 |             67 |     1.90 |                     127.30 |
| BitBake                    |          5 |               65 |           178 |             58 |     1.00 |                      58.00 |
| Umka                       |          2 |               20 |             0 |             54 |     2.00 |                     108.00 |
| TOML                       |          3 |                9 |            12 |             36 |     2.76 |                      99.36 |
| MATLAB                     |          1 |               17 |            37 |             35 |     4.00 |                     140.00 |
| INI                        |          3 |                6 |             0 |             34 |     1.00 |                      34.00 |
| sed                        |          2 |               23 |            52 |             31 |     4.00 |                     124.00 |
| HTML                       |          2 |                4 |             0 |             30 |     1.90 |                      57.00 |
| vim script                 |          1 |                3 |            12 |             27 |     3.00 |                      81.00 |
| Ruby                       |          1 |                4 |             0 |             25 |     4.20 |                     105.00 |
| Velocity Template Language |          1 |                0 |             0 |             15 |     1.00 |                      15.00 |
| **SUM**                    | **82,373** |    **5,067,941** | **4,842,110** | **30,519,022** | **0.91** |          **27,811,525.68** |
### Commits
![[image-5.png]]
### Colaboradores

![[image-6.png]]

Solo se muestra al contribudor con más commits mensuales
### Complejidad Ciclomática

Se analizó el siguiente archivo:
https://github.com/torvalds/linux/blob/master/kernel/sched/core.c
Schedule se encarga de hacer que Linux decida qué proceso o hilo debe utilizar el CPU a continuación.
## Experimento de reproducibilidad


| Medición                                                      | Primera regla     | Primer resultado | Segunda regla     | Segundo resultado | Diferencia |
| ------------------------------------------------------------- | ----------------- | ---------------- | ----------------- | ----------------- | ---------- |
| Complejidad ciclomática (<br>raw_spin_rq_trylock() en core.c) | Contar decisiones | 4                | Fórmula de McCabe | 5                 | 1          |
1.	**¿Cuánto cambió el resultado?** 1 unidad
2.	**¿Cuál de las reglas considera más válida?** Yo diría que la de contar decisiones
3.	**¿Cuál podría reproducir con mayor facilidad otra persona?** Contar decisiones
4.	**¿La diferencia representa ruido o un cambio real en el atributo?** Ruido
5.	**¿Qué regla recomendaría convertir en un estándar?** Contar decisiones
## Interpretación

1.	**¿Qué métrica proporcionó la información más útil?** Complejidad ciclomática
2.	**¿Cuál fue la menos confiable?** Líneas de código
3.	**¿Un proyecto con más líneas de código necesariamente es mejor?** No
4.	**¿Un mayor número de commits implica mayor productividad?** No
5.	**¿La complejidad elevada indica que existe un defecto?** Sí porque disminuye la mantenibilidad
6.	**¿Qué métrica no debería utilizarse para evaluar individualmente a un programador?** Líneas de código
7.	**¿Qué fuentes de ruido identificaron?** Archivos de configuración
8.	**¿Las métricas permiten afirmar que el proyecto tiene buena calidad?** La de complejidad ciclomática considero que es um buen indicador
9.	**¿Qué información adicional necesitarían para evaluarlo mejor?** Tal vez los incrementos planeados para ver cuánto tiempo tardarían en hacerlos y analizar si cambian algunas métricas dependiendo del tiempo disponible
10. **¿Qué decisión concreta tomarían a partir de los resultados?** Linux es un producto muy bien cuidado y una calidad envidiable
## Recomendación de mejora
### Complejidad Elevada

Función: __fget_files_rcu()
1.	**Evidencia del problema:**
	- La función tiene un ciclo infinito (for (;;)) y dentro tiene múltiples decisiones.
	- Tiene una complejidad ciclomática de 6 que o más

```
static inline struct file *__fget_files_rcu(struct files_struct *files,
       unsigned int fd, fmode_t mask)
{
	for (;;) {
		struct file *file;
		struct fdtable *fdt = rcu_dereference_raw(files->fdt);
		struct file __rcu **fdentry;
		unsigned long nospec_mask;

		/* Mask is a 0 for invalid fd's, ~0 for valid ones */
		nospec_mask = array_index_mask_nospec(fd, fdt->max_fds);

		/*
		 * fdentry points to the 'fd' offset, or fdt->fd[0].
		 * Loading from fdt->fd[0] is always safe, because the
		 * array always exists.
		 */
		fdentry = fdt->fd + (fd & nospec_mask);

		/* Do the load, then mask any invalid result */
		file = rcu_dereference_raw(*fdentry);
		file = (void *)(nospec_mask & (unsigned long)file);
		if (unlikely(!file))
			return NULL;

		/*
		 * Ok, we have a file pointer that was valid at
		 * some point, but it might have become stale since.
		 *
		 * We need to confirm it by incrementing the refcount
		 * and then check the lookup again.
		 *
		 * file_ref_get() gives us a full memory barrier. We
		 * only really need an 'acquire' one to protect the
		 * loads below, but we don't have that.
		 */
		if (unlikely(!file_ref_get(&file->f_ref)))
			continue;

		/*
		 * Such a race can take two forms:
		 *
		 *  (a) the file ref already went down to zero and the
		 *      file hasn't been reused yet or the file count
		 *      isn't zero but the file has already been reused.
		 *
		 *  (b) the file table entry has changed under us.
		 *       Note that we don't need to re-check the 'fdt->fd'
		 *       pointer having changed, because it always goes
		 *       hand-in-hand with 'fdt'.
		 *
		 * If so, we need to put our ref and try again.
		 */
		if (unlikely(file != rcu_dereference_raw(*fdentry)) ||
		    unlikely(rcu_dereference_raw(files->fdt) != fdt)) {
			fput(file);
			continue;
		}

		/*
		 * This isn't the file we're looking for or we're not
		 * allowed to get a reference to it.
		 */
		if (unlikely(file->f_mode & mask)) {
			fput(file);
			return NULL;
		}

		/*
		 * Ok, we have a ref to the file, and checked that it
		 * still exists.
		 */
		return file;
	}
}
```

2.	**Métrica relacionada.**
	- Complejidad ciclomática
3.	**Recomendación de mejora.**
	- Reducir la complejidad sin eliminar las comprobaciones de seguridad/concurrencia
4.	**Resultado esperado después del cambio.**
	- Una menor complejidad ciclomática y cognitiva (entre 3-4)
5.	**Forma de comprobar que la mejora funcionó.**
	- Volver a utilizar el método de contar decisiones para ver si disminuyóz
## Conclusión personal

Considero que Linux es un software de bastante calidad, porque aunque el código puede parecer tener un nivel alto de complejidad ciclomática, por el contexto y al trabajar en bajo nivel resulta muy difícil disminuirlo en algunos casos.

Ninguna métrica parece significar inmediatamente que es un producto de calidad, pero el conjunto de varias me parece que es cuando comienzan a representar calidad.