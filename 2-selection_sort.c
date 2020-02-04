#include "sort.h"
/**
 * selection_sort - function to sort an array of integers
 * in ascending order
 * @array: pointer to list
 * @size: length of array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	if (size < 2)
		return;

	for (a = 0; a < (size - 1); a++)
	{
		size_t bMin = a;

		for (b = (a + 1); b < size; b++)
		{
			if (array[b] < array[bMin])
			{
				bMin = b;
			}
		}
		temp = array[a];
		array[a] = array[bMin];
		array[bMin] = temp;
		print_array(array, size);
	}
}
