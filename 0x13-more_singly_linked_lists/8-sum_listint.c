#include "lists.h"

/**
 * sum_listint - The sum of all the data(n) of a listint_t linked list.
 *
 * @head: The head of the linked list.
 *
 * Return: The sum of each node data of listint_t list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
