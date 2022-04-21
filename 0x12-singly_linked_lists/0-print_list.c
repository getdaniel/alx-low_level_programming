#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Print all the elements of a list_t list
 *
 * @h: The list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}

		nodes++;
	}

	return (nodes);
}
