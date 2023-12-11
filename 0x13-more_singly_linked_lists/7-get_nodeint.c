#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node
 * @head: listint_t list to be freed
 * @index: the index where to return
 *
 * Return: the number nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	tmp = head;
	if (index == 0)
	{
		return (tmp);
	}
	while (i != index)
	{
		if (!tmp->next)
			return (NULL);

		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
