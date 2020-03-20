#include "lists.h"
/**
  *add_node_end -adds a new node at the end of a list_t list.
  *@head: head node
  *@str: string  to add to node
  *Return: node
  */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *temp;
unsigned int i = 0;

temp = *head;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

node->str = strdup(str);
while (str[i] != '\0')
i++;
node->len = i;

if (temp == NULL)
{
*head = node;
}
else
{
while (temp->next != NULL)
temp = temp->next;

temp->next = node;
}

return (node);
}
