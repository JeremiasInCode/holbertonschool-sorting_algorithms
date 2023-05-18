#include "sort.h"

/**
 * quick_sort - Sorts an array by means of the selection quick sort algorithm.
 *
 * @array: Array to test.
 * @size: size of the array.
 *
*/

void
quick_sort(int *array, size_t size)
{
      if (!array || !size)
            return;

      quickSortRecursive(array, 0, size - 1, size);
}

void
quickSortRecursive(int arr[], int low, int high, size_t size)
{
      /* Llamada recursiva para ordenar las mitades del arraqy.*/
      if (low < high)
      {
            int pivotIndex = partition(arr, low, high, size);
            quickSortRecursive(arr, low, pivotIndex - 1, size);
            quickSortRecursive(arr, pivotIndex + 1, high, size);
      }
}

/**
* partition - Function that is in charge of obtaining the pivot and move the numbers.
*
* @array: Array to test.
* @low: Lowest number.
* @high: Highest number (pivot - Lomuto partition).
* @size: Size of the array.
*
* Explain the function:
* moving the smaller numbers to the right and the larger ones to the left.
*/

int partition(int *array, size_t low, int high, size_t size)
{
      int i, j;
      int pivot = 0;

      pivot = array[high];
      i = (low - 1);

      for (j = low; j <= high - 1; j++)
      {
            /**
             * If the current value is smaller than the pivot,
             * we move it to the left and the the older one will be on
             * the right of the pivot.
            */
            if (array[j] < pivot)
            {
                  i++;
                  swap(&array[i], &array[j]);
                  print_array(array, size);
            }
      }
      /*pivot in the final position*/
      swap(&array[i + 1], &array[high]);
      print_array(array, size);
      /*Position of the pivot*/
      return (i + 1);
}

void
swap(int *a, int *b)
{
      size_t aux = *a;
      *a = *b;
      *b = aux;
}
