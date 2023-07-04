#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: the head of the list
 * @n: the data to add to the new node
 * Return: the address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}

