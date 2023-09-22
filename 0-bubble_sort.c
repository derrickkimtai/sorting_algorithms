#include "sort.h"
/**
 *bubble_sort - its a sorting alogarithm
 *@array: array of integers
 *@size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp, flag;


	for (i = 0; i < size - 1; i++)
	{
		flag = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;

				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k < size - 1)
					{
						printf(",");
					}
				}
			}
		}
		if (!flag)
		{
			break;
		}
	}
}
