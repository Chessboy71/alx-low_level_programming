#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *n;

	if (*head == NULL)
		return;

	n = *head;
	while (n)
	{
		t = n;
		n = t->next;
		free(t);
	}
	*head = NULL;
}
