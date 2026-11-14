Colección de snippets listos para copiar y adaptar durante el contest. Todo compatible con JDK 8 (sin `var`, sin `switch` con flechas, sin `List.of()`).

---

## 1. Lectura de input rápida

### Scanner (simple, cómodo, pero más lento)

```java
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        long x = sc.nextLong();
        double d = sc.nextDouble();
        String line = sc.nextLine(); // cuidado: puede leer un "" si acabas de leer un int/long antes
        String word = sc.next();    // lee una palabra sin espacios

        sc.close();
    }
}
```

### BufferedReader + StreamTokenizer (rápido, para inputs grandes de números)

```java
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StreamTokenizer st = new StreamTokenizer(br);

        st.nextToken();
        int n = (int) st.nval;

        st.nextToken();
        long x = (long) st.nval; // ojo: StreamTokenizer usa double internamente, cuidado con números muy grandes
    }
}
```

### BufferedReader + split (rápido, para líneas con texto o mixtas)

```java
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine().trim());

        // línea con varios enteros separados por espacio
        String[] parts = br.readLine().trim().split("\\s+");
        int[] arr = new int[parts.length];
        for (int i = 0; i < parts.length; i++) {
            arr[i] = Integer.parseInt(parts[i]);
        }

        // línea con valores separados por coma
        String[] csv = br.readLine().trim().split(",");
    }
}
```

---

## 2. Salida eficiente

```java
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < 1000; i++) {
            sb.append(i).append("\n");
        }

        // Una sola escritura al final, mucho más rápido que System.out.println en un loop
        PrintWriter pw = new PrintWriter(new BufferedWriter(new OutputStreamWriter(System.out)));
        pw.print(sb);
        pw.flush();
    }
}
```

---

## 3. Arrays 2D (matrices)

```java
int n = 5;
int[][] matrix = new int[n][n];

// Lectura típica de una matriz N x N
Scanner sc = new Scanner(System.in);
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        matrix[i][j] = sc.nextInt();
    }
}

// Recorrido con las 8 direcciones (útil para problemas tipo laberinto)
int[] dx = {-1, -1, -1, 0, 0, 1, 1, 1};
int[] dy = {-1, 0, 1, -1, 1, -1, 0, 1};

for (int d = 0; d < 8; d++) {
    int ni = i + dx[d];
    int nj = j + dy[d];
    if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
        // procesar matrix[ni][nj]
    }
}
```

---

## 4. Manejo de números grandes / overflow

```java
// SIEMPRE usar long cuando el resultado pueda superar ~2*10^9
long sum = 0;
sum += (long) a * b; // cast explícito ANTES de multiplicar, no después

// Potencias sin overflow con BigInteger (si el resultado es gigante)
import java.math.BigInteger;
BigInteger base = BigInteger.valueOf(2);
BigInteger result = base.pow(100);

// Math.pow devuelve double — ¡ojo con precisión! Prefiere potencias manuales con long cuando sea posible
long power(long base, long exp) {
    long result = 1;
    while (exp > 0) {
        if ((exp & 1) == 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}
```

---

## 5. StringBuilder (evitar concatenación con +)

```java
StringBuilder sb = new StringBuilder();
sb.append("Hola").append(" ").append(123);
sb.insert(0, "Prefijo: ");
sb.reverse();
String result = sb.toString();

// Evitar esto dentro de loops (crea un nuevo String cada vez — O(n^2)):
// String s = "";
// for (...) s += x;
```

---

## 6. Colecciones útiles

```java
import java.util.*;

// Ordenar un array
int[] arr = {5, 3, 1, 4, 2};
Arrays.sort(arr);

// Ordenar descendente (requiere Integer[], no int[])
Integer[] boxed = {5, 3, 1, 4, 2};
Arrays.sort(boxed, Collections.reverseOrder());

// ArrayList y ordenar con comparador custom
List<int[]> list = new ArrayList<>();
list.add(new int[]{3, 1});
list.add(new int[]{1, 2});
Collections.sort(list, new Comparator<int[]>() {
    public int compare(int[] a, int[] b) {
        return Integer.compare(a[0], b[0]); // JDK 8: no lambdas de método nuevo, pero esta sintaxis SÍ es válida en 8
    }
});

// Lambda simple (válida desde Java 8)
list.sort((a, b) -> Integer.compare(a[0], b[0]));

// HashMap para conteos / frecuencias
Map<Integer, Integer> freq = new HashMap<>();
for (int x : arr) {
    freq.put(x, freq.getOrDefault(x, 0) + 1);
}

// PriorityQueue (heap) — útil para problemas de "los k más grandes/pequeños"
PriorityQueue<Integer> minHeap = new PriorityQueue<>();
PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
```

---

## 7. Formateo de salida con decimales

```java
// Redondeo a 2 decimales como String (común en problemas de geometría)
double value = 4.0499999;
System.out.printf("%.2f%n", value);

// Si necesitas el valor como double redondeado (no solo imprimirlo)
double rounded = Math.round(value * 100.0) / 100.0;
```

---

## 8. Plantilla base para empezar rápido

```java
import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // --- leer input aquí ---

        StringBuilder sb = new StringBuilder();

        // --- lógica aquí ---

        // --- construir salida en sb ---

        System.out.print(sb);
    }
}
```

---

## Notas rápidas para JDK 8

- No hay `var` (eso es JDK 10+).
- Las lambdas y streams básicos (`list.sort(...)`, `map.getOrDefault(...)`) sí funcionan en JDK 8.
- `String.join(", ", list)` está disponible desde Java 8.
- Si usas `BigInteger`/`BigDecimal`, recuerda importar `java.math.*`.