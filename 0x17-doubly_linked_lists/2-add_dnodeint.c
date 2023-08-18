#include "lists.h"
/**
 * add_dnodeint - adds a new node to the beginning of a doubly linked list
 * @head: the head of the list
 * @n: the data to be added to the node
 * Return: the address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;
	return (new);
}
