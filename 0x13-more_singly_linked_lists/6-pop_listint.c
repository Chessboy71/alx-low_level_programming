#include "lists.h"

/**
 * pop_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: the number n of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
