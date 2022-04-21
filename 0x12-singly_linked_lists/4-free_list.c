#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 *
 * @head: Pointer of heads of a list_t.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
