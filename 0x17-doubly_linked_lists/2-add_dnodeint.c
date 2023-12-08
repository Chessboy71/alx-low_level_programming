#include "lists.h"

/**
 * add_dnodeint_end - prints a doubly linkned list
 * @head: the head of the list
 * @n: the number n
 *
 * Return: length of the list
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)
			->prev = new;
	*head = new;
	return (new);
}
