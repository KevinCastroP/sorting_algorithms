#include "sort.h"
/*
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur,	*prev = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cur = *list;

	while (cur)
	{
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			prev = cur->prev;
			prev->next = cur->next;
			cur->prev = prev->prev;
			prev->prev = cur;
			cur->next = prev;

			if(prev->next != NULL)
				prev->next->prev = prev;

			if (cur->prev != NULL)
				cur->next->prev = cur;

			print_list(*list);
			if (cur->prev == NULL)
				*list = cur;
			/*print_list(*list);*/
		}
		cur = cur->next;
	}
}
