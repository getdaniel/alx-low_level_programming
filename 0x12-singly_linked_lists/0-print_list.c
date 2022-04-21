#include "lists.h"

/**
 * print_list - Print all the elements of a list_t list
 *
 * @h: The list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}

	return (num);
}
