#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of
 *                           listint_t linked list.
 *
 * @head: The head of the linked list listint_t.
 * @index: The index to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *current = NULL;
	unsigned int idx = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	while (idx < index - 1)
	{
		if (!temp || (!temp->next))
			return (-1);
		temp = temp->next;
		idx++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
