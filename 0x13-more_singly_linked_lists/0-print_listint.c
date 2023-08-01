#include "lists.h"

/**
 * print_listint - all linked list elements are printed
 * @h: to print linked list of type listint_t
 *
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
