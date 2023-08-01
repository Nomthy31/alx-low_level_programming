#include "lists.h"

/**
 * pop_listint - erases the first node of a linked list
 * @head: pointer to the head node in the list
 * Return: the data in the node that was erased
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

