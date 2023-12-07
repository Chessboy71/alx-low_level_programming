#include "lists.h"

/**
 * print_dlistint - prints a doubly linkned list
 * @h: the head of the list
 *
 * Return: length of the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
