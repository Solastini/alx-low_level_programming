#include "lists.h"

/**
 * get_nodeint_at_index - to return the node in a linked list certain index
 * @head: the linked list first node
 * @index: return node index
 *
 * Return: points we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
