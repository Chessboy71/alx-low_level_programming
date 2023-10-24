#include "lists.h"

/**
 * pop_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Return: the number n of the deleted node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *t;
	unsigned int i = 0;

	if (!head || *head == NULL)
		return (-1);

	tmp = *head;
	t = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		if (i > 0)
			tmp = tmp->next;
		i++;
	}
	t = tmp->next;
	tmp->next = t->next;
	free(t);
	return (1);
}
