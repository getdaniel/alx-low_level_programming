#include "lists.h"

/**
 * pop_listint - Delete the head of the node of listint_t list.
 *
 * @head: The head of the node.
 *
 * Return: The head of the nodes data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
