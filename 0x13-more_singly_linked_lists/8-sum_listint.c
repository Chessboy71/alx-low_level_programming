#include "lists.h"

/**
 * sum_listint - sums up the numebrs in  alinked list
 * @head: the head of the list
 *
 * Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	int t = 0;
	listint_t *n;

	if (head == NULL)
		return (0);

	n = head;
	while (n)
	{
		t += n->n;
		n = n->next;
	}
	return (t);
}
