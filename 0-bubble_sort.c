#include "sort.h"

/**
 * bubble_sort - Sorts an array by means of the bubble sort algorithm.
 *
 * @array: Array to test.
 * @size: size of the array.
 *
*/

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, temp = 0;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
