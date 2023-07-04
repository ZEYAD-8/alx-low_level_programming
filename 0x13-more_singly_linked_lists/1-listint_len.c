#include "lists.h"
/**
 * listint_len - counts the number of nodes in a list
 * @h: the head of the list
 * Return: the number of nodes
*/
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

