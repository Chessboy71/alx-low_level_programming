#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}
	*head = NULL;
}
