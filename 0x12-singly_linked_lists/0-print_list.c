#include "lists.h"

/**
 * print_list - prints the strings of a linked list
 *
 * @h : the linked lists head
 * Return: the number of the items
 */

size_t print_list(const list_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        if (!h->str)
            printf("[0] (nil)\n");
        else
        {
            printf("[%u]", h->len);
            printf(" %s\n", h->str);
        }
        h = h->next;

        count += 1;
    }
    return (count);
}
