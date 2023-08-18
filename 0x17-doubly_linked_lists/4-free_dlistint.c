#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: the head of the list
 * Return: none
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		head->next->prev = NULL;
		free_dlistint(head->next);
	}
	free(head);
}
