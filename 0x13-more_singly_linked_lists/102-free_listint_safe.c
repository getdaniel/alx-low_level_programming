#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 *
 * @h: Pointer to head node(first node) of the linked list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int differ;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differ = *h - (*h)->next;

		if (differ > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
