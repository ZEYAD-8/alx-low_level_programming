#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a node at a certain position
 * @h: head of the doubly linked list
 * @idx: the index to add the node at
 * @n: the value of the node
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int count = 0;

	if (new == NULL)
	{
		return (NULL);
	}

	if (h == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	tmp = *h;
	while (tmp != NULL)
	{
		if (count == idx)
		{
			new->prev = tmp->prev;
			new->next = tmp;
			tmp->prev->next = new;
			tmp->prev = new;
			return (new);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
