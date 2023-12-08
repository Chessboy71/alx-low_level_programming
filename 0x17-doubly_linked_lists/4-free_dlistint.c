#include "lists.h"

/**
 * free_dlistint - add node to the end of  the list
 * @head: double ptr to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *m;

	while (head)
	{
		m = head->next;
		free(head);
		head = m;
	}
}
