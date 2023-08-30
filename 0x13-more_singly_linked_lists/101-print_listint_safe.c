#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - will count the num of unique nodes in
 * a looped listint_t linked list
 * @head: pointer to the head of the listint_t to check
 *
 * Return: the number of unique nodes in the list
 * else -return 0 if not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise_pt, *hare_pt;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise_pt = head->next;
	hare_pt = (head->next)->next;

	while (hare_pt)
	{
		if (tortoise_pt == hare_pt)
		{
			tortoise_pt = head;
			while (tortoise_pt != hare_pt)
			{
				nodes++;
				tortoise_pt = tortoise_pt->next;
				hare_pt = hare_pt->next;
			}

			tortoise_pt = tortoise_pt->next;
			while (tortoise_pt != hare_pt)
			{
				nodes++;
				tortoise_pt = tortoise_pt->next;
			}

			return (nodes);
		}

		tortoise_pt = tortoise_pt->next;
		hare_pt = (hare_pt->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
