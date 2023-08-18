#include "lists.h"
/**
 * print_dlistint - prints the contents of a doubly linked list
 * @h: the head of the list
 * Return: the number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t printed = 0;
	dlistint_t *tmp;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);
	tmp = h->next;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		printed++;
		tmp = tmp->next;
	}
	return (++printed);
}
