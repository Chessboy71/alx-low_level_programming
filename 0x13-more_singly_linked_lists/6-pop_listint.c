#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);
	else
	{
		tmp = *head;
		*head = tmp->next;
		n = tmp->n;
		free(tmp);
		return (n);
	}
}
