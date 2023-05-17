#include "sort.h"

/**
 * selection_sort - Sorts an array by means of the selection sort algorithm.
 *
 * @array: Array to test.
 * @size: size of the array.
 *
*/

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0, min = 0;

	if (!array || !size)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < (size - i - 1); j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
		print_array(array, size);
	}
}
