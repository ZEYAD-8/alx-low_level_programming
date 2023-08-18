#include "lists.h"
/**
 * sum_dlistint - sums all the numbers in each node in the list
 * @head: head of the list
 * Return: the sum as integer.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
