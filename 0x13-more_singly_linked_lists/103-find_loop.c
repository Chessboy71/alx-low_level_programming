#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (s && fast && fast->next)
	{
		fast = fast->next->next;
		s = s->next;
		if (fast == s)
		{
			s = head;
			while (s != fast)
			{
				s = s->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
