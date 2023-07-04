#include "lists.h"

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t nodes;

	tmp = h;
	nodes = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
