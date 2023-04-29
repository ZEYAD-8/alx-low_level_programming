#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = stdrup(str);
if (new -> str == NULL)
{
free(new);
return (NULL);
}
new -> len = strlen(str);
new -> next = *head;
*head = new;
return (new);
}
