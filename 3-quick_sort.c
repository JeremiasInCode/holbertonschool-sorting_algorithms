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

      /* Llamada recursiva para ordenar las mitades del arraqy.*/
      if (low < high)
      {
            pivotIndex = partition(arr, low, high, size);
            /* Left */
            quickSortRecursive(arr, low, pivotIndex - 1, size);
            /* Right */
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
      int i = 0, j = 0, pivot = 0;

      pivot = array[high];
      i = low - 1;

      for (j = low; j <= high; j++)
      {
            /**
             * If the current value is smaller than the pivot,
             * we move it to the left and the the older one will be on
             * the right of the pivot.
            */
            if (array[j] < pivot)
            {
                  i++;
                  swap(array, i, j, size);
            }
      }
      /*pivot in the final position*/
      swap(array, i + 1, high, size);
      /*Position of the pivot*/
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
