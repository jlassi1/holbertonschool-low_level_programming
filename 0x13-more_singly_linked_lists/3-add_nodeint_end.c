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

node = malloc(sizeof(listint_t));
if (node == NULL)
return (0);
temp = *head;

node->n = n;

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
return (temp);

}
