#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specific index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, else returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temporary = head;

	while (temporary && i < index)
	{
		temporary = temporary->next;
		i++;
	}

	return (temporary ? temporary : NULL);
}
