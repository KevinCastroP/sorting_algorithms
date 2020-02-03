#include "sort.h"
#include <stdio.h>

/**
 * _swap - Entry for swap
 * Desc: _swap function
 * @first: int pointer
 *
 **/
void _swap(int *array, size_t pos)
{
	int temp = array[pos];

	array[pos] = array[pos + 1];
	array[pos + 1] = temp;
}

/**
 * bubble_sort - Entry point
 * Desc: bubble_sort function
 * @array: int char type
 * @size_t: structure size_t type
 * Return: Function that sorts an array of integers
 **/
void bubble_sort(int *array, size_t size)
{
	size_t j = 0;
	int flag = 0;

	while (!flag)
	{
		flag = 1;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				_swap(array, j);
				flag = 0;
				print_array(array, size);
			}
			j++;
		}
		j = 0;
	}
}
