#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: The first(head) node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
