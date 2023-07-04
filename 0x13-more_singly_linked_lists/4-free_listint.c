#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: head of a list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	listint_t *current;
	listint_t *next;

	current = head;
	next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

