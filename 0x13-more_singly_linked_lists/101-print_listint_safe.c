#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 *
 * @head: The first node of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	long int differ;

	while (head)
	{
		differ = head - head->next;
		node++;
		printf("[%p]%d\n", (void *)head, head->n);

		if (differ > 0)
			head = head->next;
		else
		{
			printf("->[%p]%d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node);
}
