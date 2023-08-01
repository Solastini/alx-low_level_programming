#include "lists.h"

/**
 * listint_len - to return linked lists number of elements
 * @h: to traverse type listint_t linked list
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
