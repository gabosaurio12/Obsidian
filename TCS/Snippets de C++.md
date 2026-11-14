Colección de snippets listos para copiar y adaptar. Usa `C++17` si el compilador lo permite (confírmalo en la plataforma); todo aquí también funciona en `C++11`.

---

## 0. Plantilla base

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // --- lógica aquí ---

    return 0;
}
```

> `bits/stdc++.h` incluye casi toda la STL de una vez — ideal para contest, evita tener que recordar qué headers importar. `sync_with_stdio(false)` + `cin.tie(NULL)` aceleran mucho la lectura con `cin`.

---

## 1. Lectura de input

```cpp
int n;
cin >> n;

long long x;
cin >> x;

string s;
cin >> s;          // lee una palabra (sin espacios)
getline(cin, s);   // lee la línea completa (incluye espacios)

// Línea con varios enteros separados por espacio, cantidad desconocida
string line;
getline(cin, line);
stringstream ss(line);
vector<int> arr;
int val;
while (ss >> val) arr.push_back(val);

// Leer N enteros directo a un vector
int n;
cin >> n;
vector<int> v(n);
for (int i = 0; i < n; i++) cin >> v[i];
```

---

## 2. Conversión de strings y números

```cpp
// string -> int / long / double
int a = stoi("123");
long long b = stoll("123456789012");
double d = stod("3.14");

// int / double -> string
string s1 = to_string(123);
string s2 = to_string(3.14159);

// Parsear con base distinta (ej. binario, hexadecimal)
int hexVal = stoi("1A", nullptr, 16);   // = 26
int binVal = stoi("1010", nullptr, 2);  // = 10

// Separar un string por un delimitador (split manual)
vector<string> split(const string& s, char delim) {
    vector<string> tokens;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delim)) tokens.push_back(token);
    return tokens;
}
// uso: split("a,b,c", ',') -> {"a", "b", "c"}
```

---

## 3. Vectores

```cpp
vector<int> v;               // vacío
vector<int> v2(10);          // 10 elementos en 0
vector<int> v3(10, -1);      // 10 elementos en -1
vector<vector<int>> matrix(n, vector<int>(m, 0)); // matriz N x M en 0

v.push_back(5);
v.pop_back();
v.size();
v.empty();
v.clear();

// Ordenar
sort(v.begin(), v.end());                       // ascendente
sort(v.begin(), v.end(), greater<int>());        // descendente
sort(v.begin(), v.end(), [](int a, int b) {      // comparador custom
    return a > b;
});

// Buscar
bool existe = binary_search(v.begin(), v.end(), 5); // requiere estar ordenado
auto it = find(v.begin(), v.end(), 5);              // búsqueda lineal
if (it != v.end()) { /* encontrado, *it == 5 */ }

// Suma, max, min
int suma = accumulate(v.begin(), v.end(), 0);
int mx = *max_element(v.begin(), v.end());
int mn = *min_element(v.begin(), v.end());

// Eliminar duplicados (requiere ordenar primero)
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

// Reverse
reverse(v.begin(), v.end());

// Recorrer
for (int x : v) { /* ... */ }
for (int i = 0; i < (int)v.size(); i++) { /* v[i] */ }
```

---

## 4. Pares y tuplas (útil para guardar índice + valor)

```cpp
pair<int, int> p = {3, 5};
cout << p.first << " " << p.second;

vector<pair<int, int>> vp;
vp.push_back({1, 2});
sort(vp.begin(), vp.end()); // ordena por .first, luego por .second

tuple<int, int, int> t = {1, 2, 3};
int a, b, c;
tie(a, b, c) = t;
// o en C++17: auto [a, b, c] = t;
```

---

## 5. Estructuras de datos (STL)

### Stack / Queue / Deque

```cpp
stack<int> st;
st.push(1); st.top(); st.pop(); st.empty();

queue<int> q;
q.push(1); q.front(); q.pop(); q.empty();

deque<int> dq;
dq.push_back(1); dq.push_front(2);
dq.back(); dq.front();
```

### Priority Queue (heap)

```cpp
priority_queue<int> maxHeap;               // tope = máximo
priority_queue<int, vector<int>, greater<int>> minHeap; // tope = mínimo

maxHeap.push(5);
maxHeap.top();
maxHeap.pop();
```

### Set / Map (ordenados, basados en árbol — O(log n))

```cpp
set<int> s;
s.insert(5);
s.erase(5);
s.count(5);          // 0 o 1
s.find(5) != s.end(); // existe?

map<string, int> m;
m["clave"] = 10;
m.count("clave");
for (auto& [k, v] : m) { /* C++17: recorre ordenado por clave */ }

// multiset / multimap permiten duplicados
multiset<int> ms;
```

### Unordered Set / Map (hash, O(1) promedio — más rápido si no necesitas orden)

```cpp
unordered_set<int> us;
us.insert(5);
us.count(5);

unordered_map<int, int> um;
um[5] = 10;
um.count(5);

// Conteo de frecuencias (patrón muy común)
unordered_map<int, int> freq;
for (int x : v) freq[x]++;
```

---

## 6. Strings

```cpp
string s = "hola mundo";

s.length(); // o s.size()
s.substr(0, 4);        // "hola"
s.substr(5);           // "mundo" (desde índice 5 hasta el final)
s.find("mundo");       // posición, o string::npos si no existe

s += " !";             // concatenar
s.append("!");

transform(s.begin(), s.end(), s.begin(), ::toupper); // mayúsculas
transform(s.begin(), s.end(), s.begin(), ::tolower); // minúsculas

reverse(s.begin(), s.end());

// Comparar ignorando mayúsculas (manual, no hay built-in directo)
bool equalsIgnoreCase(const string& a, const string& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++)
        if (tolower(a[i]) != tolower(b[i])) return false;
    return true;
}

// Construir strings eficientemente (concatenar en loop SÍ es razonable en C++
// gracias a small string optimization, pero ostringstream es más seguro para muchos appends)
ostringstream oss;
oss << "valor: " << 42 << ", " << 3.14;
string result = oss.str();
```

---

## 7. Manejo de overflow y números grandes

```cpp
// SIEMPRE usar long long cuando el resultado pueda superar ~2*10^9
long long sum = 0;
sum += (long long)a * b; // cast ANTES de multiplicar

// Potencia rápida sin overflow (exponenciación binaria)
long long power(long long base, long long exp, long long mod = LLONG_MAX) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

// Constantes útiles
#include <climits>
INT_MAX; INT_MIN;
LLONG_MAX; LLONG_MIN;
```

---

## 8. Matrices y recorridos (grafos/laberintos)

```cpp
int n = 5, m = 5;
vector<vector<int>> grid(n, vector<int>(m));
for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
        cin >> grid[i][j];

// 4 direcciones (arriba, abajo, izq, der)
int dx4[] = {-1, 1, 0, 0};
int dy4[] = {0, 0, -1, 1};

// 8 direcciones
int dx8[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy8[] = {-1, 0, 1, -1, 1, -1, 0, 1};

for (int d = 0; d < 4; d++) {
    int ni = i + dx4[d], nj = j + dy4[d];
    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
        // procesar grid[ni][nj]
    }
}

// BFS típico
queue<pair<int,int>> qq;
vector<vector<bool>> visited(n, vector<bool>(m, false));
qq.push({0, 0});
visited[0][0] = true;
while (!qq.empty()) {
    auto [ci, cj] = qq.front(); qq.pop();
    for (int d = 0; d < 4; d++) {
        int ni = ci + dx4[d], nj = cj + dy4[d];
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && !visited[ni][nj]) {
            visited[ni][nj] = true;
            qq.push({ni, nj});
        }
    }
}
```

---

## 9. Formateo de salida

```cpp
#include <iomanip>

double value = 4.0499999;
cout << fixed << setprecision(2) << value << endl; // 4.05

// Redondeo manual a double
double rounded = round(value * 100.0) / 100.0;

// Imprimir con ancho fijo (padding)
cout << setw(5) << setfill('0') << 42 << endl; // 00042
```

---

## Notas rápidas

- `#include <bits/stdc++.h>` es cómodo para contest pero no es estándar en todos los compiladores fuera de GCC — confirma que CodeVita lo soporte (normalmente sí).
- Evita `endl` dentro de loops grandes (hace flush cada vez); usa `"\n"` y deja que el buffer se vacíe al final.
- `map`/`set` son O(log n) por operación; `unordered_map`/`unordered_set` son O(1) promedio pero peor caso O(n) — para la mayoría de problemas de CodeVita, `unordered_map` es la opción más rápida salvo que necesites orden.