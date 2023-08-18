#include "lists.h"
/**
 * dlistint_len - counts number of nodes in a doubly linked list
 * @h: the head of the list
 * Return: the number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *tmp;

	if (h == NULL)
		return (0);

	tmp = h->next;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}
	return (++count);
}
