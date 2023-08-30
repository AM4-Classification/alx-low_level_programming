#include "lists.h"

/**
 * listint_len - returns the count of elements in a linked lists
 * @head: linked list of type listint_t to go through
 *
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head)
	{
		numnum_nodes++;
		head = head->next;
	}

	return (num_nodes);
}
