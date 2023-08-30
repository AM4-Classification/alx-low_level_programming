#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @head: linked list of type listint_t to print
 *
 * Return: num_nodesber of nodes
 */
size_t print_listint(const listint_t *head)
{
	size_t num_nodes = 0;

	while (head)
	{
		printf("%d\n", head->n);
		num_nodes++;
		head = head->next;
	}

	return (num_nodes);
}
