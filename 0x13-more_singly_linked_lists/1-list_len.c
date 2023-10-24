#include "lists.h"

/**
 * listint_len - prints the strings of a linked list
 *
 * @h : the linked lists head
 * Return: the number of the items
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
