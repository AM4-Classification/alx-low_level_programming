#include "lists.h"

/**
 * reverse_listint - reverses a linked list set
 * @head: pointers to first node in the list
 *
 * Return: returns a pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_pt = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous_pt;
		previous_pt = *head;
		*head = next;
	}

	*head = previous_pt;

	return (*head);
}
