#include "lists.h"

/**
 * sum_listint - sum all the data in a listint_t list
 * @head: 1st node in the linked list
 *
 * Return: returns the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temporary = head;

	while (temporary)
	{
		sum += temporary->n;
		temporary = temporary->next;
	}

	return (sum);
}
