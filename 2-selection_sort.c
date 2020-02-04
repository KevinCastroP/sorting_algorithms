#include "sort.h"
/**
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int temp;

	if (size < 2)
		return;

	for (a = 0; a < (size -1); a++)
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
