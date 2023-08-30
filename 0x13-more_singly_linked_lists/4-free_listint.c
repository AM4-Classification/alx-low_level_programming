#include "lists.h"

/**
 * free_listint - frees memory alloc of the linked list
 * @head: listint_t list is the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temporary;

	while (head)
	{
		temporary = head->next;
		free(head);
		head = temporary;
	}
}
