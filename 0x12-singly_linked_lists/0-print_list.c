#include "lists.h"
size_t print_list(const list_t *h)
{
size_t counter = 0;
if (h == NULL)
{
return counter;
}
list_t *temp = h;
printf("%s", temp->str);
while(1)
{
if (temp -> str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n",temp->len, temp->str);
counter++;
if(temp->next == NULL)
break;
temp = temp -> next;
}
return counter;
}