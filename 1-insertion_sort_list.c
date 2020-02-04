#include "sort.h"
/**
 * insertion_sort_list - function to sort a doubly linked list in
 * ascending order using the insertion sort algorithm
 * @list: pointer to pointer to a list
 * Return: nothing 
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur,	*back = NULL;

	if (list == NULL || (*list) == NULL || ((*list)->next) == NULL)
		return;

	cur = *list;

	while (cur)
	{
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			back = cur->prev;
			back->next = cur->next;
			cur->prev = back->prev;
			back->prev = cur;
			cur->next = back;

			if (back->next != NULL)
				back->next->prev = back;

			if (cur->prev != NULL)
				cur->prev->next = cur;

			if (cur->prev == NULL)
				*list = cur;
			print_list(*list);
		}
		cur = cur->next;
	}
}
