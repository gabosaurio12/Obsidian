
## Código

```cpp
int cantidadANumero(string cantidadC){
	string cadNueva = "";
	int i = 0;
	int cantidadNumero;

	while(cantidadC[i] != '\0'){
		if(cantidadC[i] > 44 && cantidadC[i] < 58){
			cadNueva = cadNueva + cantidadC[i];
		}

		i++;
	}

	if(cadNueva == ""){
		cantidadNumero = -1;
	}
	else{
		
		cantidadNumero = stoi(cadNueva);
	}


	return cantidadNumero;
}
```

## 1. Definición del módulo

El módulo se encarga de pasar una número almacenado en una cadena de caracteres a el mismo número pero almacenado en un entero.

## 2. LOC con regla explícita

24 líneas (incluyendo líneas en blanco, firma y llaves)

## 3. EXEC con regla explícita

Estoy contando como operador cada símbolo que tenga un uso distinto y como operando a cada asignación que sea distinta.

## 4. N1, N2, n1 y n2

N1 = 13
N2 = 11
n1 = 9
n2 = 8

## 5. Una conclusión y limitación

Esta medida no refleja complejidad ni calidad del código pero sí podrían llegar a revelar la duplicación de código o cuestiones similares.