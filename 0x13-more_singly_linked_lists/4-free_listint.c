#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: head of a list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	if (head == NULL)
		return;

	current = head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

