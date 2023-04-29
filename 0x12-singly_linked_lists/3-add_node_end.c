#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *current;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new;
}

return (new);
}
