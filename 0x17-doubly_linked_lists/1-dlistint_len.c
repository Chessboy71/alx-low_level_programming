#include "lists.h"

/**
 * dlistint_len - return the numer of elemetsn in the list
 * @h: the head of the list
 *
 * Return: length of the list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
