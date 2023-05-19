### Sorting Algorithms

En este repositorio se encuentran implementados diversos algoritmos de ordenamiento en el lenguaje C. A continuación se presenta una breve descripción de cada algoritmo junto con su complejidad temporal.

## Bubble Sort

El algoritmo Bubble Sort es un algoritmo simple de ordenamiento que funciona comparando repetidamente elementos adyacentes y intercambiándolos si están en el orden incorrecto. El proceso se repite hasta que la lista esté completamente ordenada.

### Complejidad Temporal:

Peor caso: O(n^2)
Caso promedio: O(n^2)
Mejor caso (optimizado): O(n) - cuando la lista ya está ordenada



### Quick Sort

El algoritmo Quick Sort es un algoritmo de ordenamiento recursivo y eficiente que se basa en el principio de divide y conquistar. Funciona seleccionando un elemento como pivote y particionando la lista en dos subconjuntos: elementos menores al pivote y elementos mayores al pivote. Luego, se aplica recursivamente el algoritmo a cada subconjunto hasta que la lista esté completamente ordenada.

**Complejidad Temporal:**
- Peor caso: O(n^2)
- Caso promedio: O(n log n)
- Mejor caso (optimizado): O(n log n)

**Implementación:**

```c
#include "sort.h"

void quick_sort(int *array, size_t size)
{
	if (!array || !size || is_sorted(array, size) == 0)
	{
		return;
	}
	quickSortRecursive(array, 0, size - 1, size);
}

int
is_sorted(int *array, size_t size)
{
	size_t i = 0;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			return (1);
		}
	}
	return (0);
}

void
quickSortRecursive(int arr[], int low, int high, size_t size)
{
	int pivotIndex = 0;

	if (low < high)
	{
		pivotIndex = partition(arr, low, high, size);
		quickSortRecursive(arr, low, pivotIndex - 1, size);
		quickSortRecursive(arr, pivotIndex + 1, high, size);
	}
}

int partition(int *array, size_t low, int high, size_t size)
{
	int i = 0, j = 0, pivot = 0;

	pivot = array[high];
	i = low - 1;

	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(array, i, j, size);
		}
	}
	swap(array, i + 1, high, size);
	return (i + 1);
}

void
swap(int *array, int low, int high, size_t size)
{
	int aux = 0;

	if (array[low] != array[high])
	{
		aux = array[low];
		array[low] = array[high];
		array[high] = aux;
		print_array(array, size);
	}
}


