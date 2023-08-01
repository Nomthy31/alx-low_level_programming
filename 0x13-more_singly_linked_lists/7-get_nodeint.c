#include "lists.h"

/**
 * get_nodeint_at_index - computes the node at a certain index in a list
 * @head: head node in the linked list
 * @index: index of the node to compute
 * Return: pointer to the node we want
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

