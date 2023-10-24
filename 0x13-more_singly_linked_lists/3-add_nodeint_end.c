#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: points to the list
 * @n: integer to put in new list
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (t->next)
		t = t->next;

	t->next = new;

	return (new);
}
