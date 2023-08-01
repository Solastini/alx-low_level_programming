#include "lists.h"

/**
 * add_nodeint - to add a new node at the start of linked list
 * @head: points the first node from the list
 * @n: the new node data
 *
 * Return: NULL to the fails, or pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
