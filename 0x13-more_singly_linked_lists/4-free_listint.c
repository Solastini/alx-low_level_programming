#include "lists.h"

/**
 * free_listint - to make a linked list free
 * @head: to be freed lists in listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
