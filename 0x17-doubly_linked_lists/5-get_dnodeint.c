#include "lists.h"
/**
 * get_dnodeint_at_index - gets the node at index in a doubly linked list
 * @head: head of list
 * @index: the number of the node to get
 * Return: The desired node or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	while (tmp != NULL)
	{
		if (count == index)
		{
			return (tmp);
		}
		else if (count < index)
		{
			tmp = tmp->next;
			count++;
		}
		else
		{
			return (NULL);
		}
	}
	return (tmp);
}
