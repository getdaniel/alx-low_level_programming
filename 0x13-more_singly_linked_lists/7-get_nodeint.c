#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list.
 *
 * @head: Head of the list.
 * @index: The index of the node starting from 0.
 *
 * Return: Pointer to nth node that we are looking for.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in = 0;
	listint_t *temp = head;

	while (temp && in < index)
	{
		temp = temp->next;
		in++;
	}

	return (temp ? temp : NULL);
}
