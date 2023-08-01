#include "lists.h"

/**
 * pop_listint - to delete the linked list head node
 * @head: pointes the linked list first element
 *
 * Return: deleted data in the elements
 * or 0 to the empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

