Trabajan con un **conjunto de soluciones** en lugar de una sola, inspiradas en sistemas biológicos o sociales.
Son métodos de optimización que trabajan con un **conjunto de soluciones** (una población) en paralelo. Se inspiran en procesos naturales o sociales y se usan para problemas de optimización, modelado y simulación.
## Principales enfoques
- **Algoritmos genéticos (AGs):** Evolución y operadores genéticos
- **Computación evolutiva (CE):** Margo amplio que incluye estratiegias evolutivas (ES), Programación Evolutiva (EP), etc.
- **Optimización por Colonia de Hormicas (AGO):** Feromonas y recorridos (Inteligencia Colectiva)
- **Inteligencia Colectiva (IC) /PSO:** Comportamiento emergente y enjambres (partículas)
## Ventajas
- **Exploración:** prueban muchas zonas del espacio de búsqueda
- **Explotación:** afinan soluciones prometedoras
- **Robustez:** evitan quedarse en mínimos locales
- **Cooperación:** las soluciones intereactúan para mejorar colectivamente
## Analogía: Buscando el tesoro
- **Búsqueda solitaria (Métodos clásicos):** Una sola persona explora todo el mapa paso a paso (lento y susceptible a quedar atrapado en un pico local)
- **Búsqueda Poblacional (AGs, IC):** Varias personas exploran distintas zonas al mismo tiempo y comparten información (rápido y robusto)
## Compromiso clave
Las búsquedas poblacionales deben lograr un equilibrio entre:
- **Exploración:** Buscar soluciones en nuevas regiones del espacio
- **Explotación:** Refinar y mejorar las soluciones prometedoras ya encontradas
## Algoritmos genéticos
Los **algoritmos genéticos** (AGs) imitan la selección natural: las soluciones más aptas tienen más probabilidad de reproducirse 
Un AG mantiene una **población** de soluciones. Iterativamente: evalúa (fitness), selecciona padres, genera hijos (cruza + mutación) y reemplaza para formar la siguiente generación.
### Ejemplo AG
Problema: maximizar f(x) = x^2 para x E {0,1,2,3,4,5} 
- Representación binaria: x = 3 -> 011
- Fitness: f(3) = 9
## Operadores genéticos
- **Selección:** elige padres (ej. ruleta, torneo)
- **Cruce:** mezcla cromosomas de dos padres
- **Mutación:** cambia un gen aleatoriamente (opcional)