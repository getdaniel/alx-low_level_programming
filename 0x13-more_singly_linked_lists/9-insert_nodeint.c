#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 *
 * @head: The first node of listint_t.
 * @idx: The index of the list where a new node should be added.
 * @n: The data to be added.
 *
 * Return: The of the new node or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;

		return (new);
	}

	for (index = 0; temp && index < idx; index++)
	{
		if (index == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;

			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
