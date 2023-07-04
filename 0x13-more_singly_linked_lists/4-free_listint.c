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

	listint_t *next;

	next = head->next;
	free(head);
	free_listint(next);
}

