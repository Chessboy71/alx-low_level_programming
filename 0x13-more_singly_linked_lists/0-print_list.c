#include "lists.h"

/**
 * print_list - prints the strings of a linked list
 *
 * @h : the linked lists head
 * Return: the number of the items
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf(" %d\n", h->str);
		h = h->next;
		count += 1;
	}
	return (count);
}
