#include "lists.h"

/**
 * list_len - prints the strings of a linked list
 *
 * @h : the linked lists head
 * Return: the number of the items
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
