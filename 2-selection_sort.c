#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, minj, tmp;

	for (i = 0; i < size - 1; i++)
	{
		minj = i;

		for (j = i + 1; j < size; j++)
		{

			minj = i;

			if (array[j] < array[minj])
			{
				minj = j;
			}
			if (minj != i)
			{
				tmp = array[i];
				array[i] = array[minj];
				array[minj] = tmp;
			}
		}
		print_array(array, size);
	}
}

