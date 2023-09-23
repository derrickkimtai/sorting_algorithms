#include "sort.h"
/**
 * selection_sort - a function that sorts an array of integers
 * in ascending order using
 * @array: the array which well be sorted
 * @size:  the size of array
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min] > array[j])
			{
				min = j;
			}
		}
		if (min != i)
		{

			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);

		}
	}
}
