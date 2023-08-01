#include "lists.h"

/**
 * sum_listint - to calculate listint_t data lists sum
 * @head: the first linked list node
 *
 * Return: sum results
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
