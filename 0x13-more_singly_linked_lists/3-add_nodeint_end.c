#include "lists.h"
/**
  *add_nodeint_end-adds a new node at the end of a listint_t
  *@head:pointer to nodes of list
  *@n: integer to add to the node
  *Return: node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *temp;

if (head == NULL)
return (NULL);

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
temp = *head;

node->n = n;

if (temp == NULL)
{
*head = node;
return (node);
}
else
{
while (temp->next != NULL)
temp = temp->next;

temp->next = node;
}
return (node);

}
