#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long size_t;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/*function to sort an array using bubble sort*/
void bubble_sort(int *array, size_t size);
void swap(int *array, size_t pos);
/*function to sort a double linked list isertion sort*/
void insertion_sort_list(listint_t **list);
/*function to sort an array of integers using selection sort*/
void selection_sort(int *array, size_t size);
/*function to sort an array of int using quick sort*/
void quick_sort(int *array, size_t size);
#endif /* SORT_H */
