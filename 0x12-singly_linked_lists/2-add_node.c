#include "lists.h"
/**
  *add_node -adds a new node at the beginning of a list_t list.
  *@head: node of link_list
  *@str: string to paste to node
  *Return: pointer of next node
  */
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
unsigned int i = 0;

node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);

node->str = strdup(str);
while (str[i] != '\0')
i++;

node->len = i;
node->next = *head;
*head = node;

return (*head);

}
