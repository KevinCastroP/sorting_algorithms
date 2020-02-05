#include "sort.h"
/**
 * _swap - function to swap 2 variables
 * @array: contain the list
 * @pos: contain the 1st value
 * @high: contain the 2nd value
 * @size: size of array
 * Return: nothing
 */
void _swap(int *array, int pos, int high, size_t size)
{
	int temp = array[pos];

	array[pos] = array[high];
	array[high] = temp;
	print_array(array, size);
}

/**
 * lomuto_divi - function to partition scheme
 * @array: contain the list
 * @low: contain the position of the minimum value
 * @high: contain the position of the maximum value
 * @size: size of array
 * Return: the position to swap
 */
int lomuto_divi(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (j != i)
			{
				_swap(array, i, j, size);
			}
			i++;
		}
	}
	if (i != high)
	{
		_swap(array, i, high, size);
	}
	return (i);
}

/**
 * quick_aux - function to help sort the array
 * @array: contain the list
 * @low: contain the position of the minimum value
 * @high: contain the position of the maximum value
 * @size: size of array
 * Return: nothing
 */
void quick_aux(int *array, int low, int high, size_t size)
{
	int pivot = 0;

	if (low < high)
	{
		pivot = lomuto_divi(array, low, high, size);
		quick_aux(array, low, pivot - 1, size);
		quick_aux(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - function to sort the array
 * @array:contain the list to sort
 * @size: size of array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_aux(array, 0, size - 1, size);

}
