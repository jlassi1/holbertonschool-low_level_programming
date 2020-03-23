#include "lists.h"
/**
  *add_nodeint-  adds a new node at the beginning of a listint_t
  *@head: pointer to nodes of list
  *@n: integer to add to the node
  *Return: node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (0);

node->n = n;
node->next = *head;
*head = node;

return (node);

}
