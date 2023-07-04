#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: the head of a list
 * @n: the data to add in the new node
 * Return: the address of the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}

