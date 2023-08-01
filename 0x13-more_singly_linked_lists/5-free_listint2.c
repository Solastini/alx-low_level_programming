#include "lists.h"

/**
 * free_listint2 - to make a linked list free
 * @head: lists to be freed pointed in the listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
