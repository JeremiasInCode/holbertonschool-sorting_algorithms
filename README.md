### Sorting Algorithms

En este repositorio se encuentran implementados diversos algoritmos de ordenamiento en el lenguaje C. A continuación se presenta una breve descripción de cada algoritmo junto con su complejidad temporal.

<br>

## Bubble Sort

El algoritmo Bubble Sort es un algoritmo simple de ordenamiento que funciona comparando repetidamente elementos adyacentes y intercambiándolos si están en el orden incorrecto. El proceso se repite hasta que la lista esté completamente ordenada.
<br>
### Complejidad Temporal:
- Peor caso: O(n^2)
- Caso promedio: O(n^2)
- Mejor caso (optimizado): O(n) - cuando la lista ya está ordenada

<br>

## Selection Sort

El algoritmo de ordenación por selección es un algoritmo simple de ordenamiento que sigue el enfoque de seleccionar repetidamente el elemento mínimo (o máximo) de una lista desordenada y colocarlo al principio. A medida que se itera sobre la lista, el elemento mínimo restante se coloca en su posición correcta.

Sonsidera un algoritmo de ordenamiento por comparación, ya que requiere comparar los elementos del arreglo para determinar el más pequeño. Su implementación es bastante sencilla y es adecuado para ordenar pequeñas cantidades de datos o arreglos casi ordenados.
<br>
### Complejidad Temporal:
- Peor caso: O(n^2)
- Caso promedio: O(n^2)
- Mejor caso (optimizado): O(n) - cuando la lista ya está ordenada

<br>

## Insertion Sort
El algoritmo de Insertion Sort es un algoritmo de ordenamiento simple y eficiente para listas pequeñas o casi ordenadas. Funciona dividiendo la lista en dos partes: una sublista ordenada y una sublista no ordenada. En cada iteración, el algoritmo toma un elemento de la sublista no ordenada y lo inserta en la posición correcta dentro de la sublista ordenada.

### Complejidad Temporal:
- Peor caso: O(n^2)
- Caso promedio: O(n^2)
- Mejor caso (optimizado): O(n) - cuando la lista ya está ordenada.

<br>

### Quick Sort

El algoritmo Quick Sort es un algoritmo de ordenamiento recursivo y eficiente que se basa en el principio de divide y conquistar. Funciona seleccionando un elemento como pivote y particionando la lista en dos subconjuntos: elementos menores al pivote y elementos mayores al pivote. Luego, se aplica recursivamente el algoritmo a cada subconjunto hasta que la lista esté completamente ordenada.
<br>
**Complejidad Temporal:**
- Peor caso: O(n^2)
- Caso promedio: O(n log n)
- Mejor caso (optimizado): O(n log n)
