#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a certain position
 * @h: head of the doubly linked list
 * @idx: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	tmp = *h;
	if (idx == 0)
	{
		if (tmp->next)
		{
			tmp->next->prev = NULL;
			tmp = tmp->next;
			free(*h);
			*h = tmp;
		}
		else
		{
			free(*h);
			*h = NULL;
		}
		return (1);
	}

	while (tmp != NULL)
	{
		if (count == idx)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
		tmp = tmp->next;
		count++;
	}
	return (0);
}
