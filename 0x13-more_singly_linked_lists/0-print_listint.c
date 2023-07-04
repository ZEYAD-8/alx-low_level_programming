#include "lists.h"
/**
 * print_listint - prints the contents of a linked list
 * @h: Head of the list
 * Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t nodes;

	tmp = h;
	nodes = 0;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}

