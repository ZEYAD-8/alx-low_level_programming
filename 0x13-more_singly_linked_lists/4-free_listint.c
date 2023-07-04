#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: head of a list
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	if (head->next == NULL)
	{
		free(head);
		return;
	}
	head = head->next;
	free_listint(head);
}

