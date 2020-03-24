#include "lists.h"
/**
  *delete_nodeint_at_index-deletes the node at index index of a listint_t
  *@index: index is the index of the node that should be deleted
  *@head:  nodes of linked list
  *
  *Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node;
listint_t *temp;
unsigned int i = 0;
int x = -1;
if (*head == NULL)
return (x);

node = malloc(sizeof(listint_t));
if (node == NULL)
return (x);
temp = *head;

if (index == 0)
{
temp = temp->next;

free (*head);
*head = temp;
return(-x);
}

while (temp != NULL && temp->next != NULL)
{
temp = temp->next;
i++;
if (i == index - 1)
{
node = temp;
temp = temp->next;
node->next = temp->next;
free (temp);
x = 1;
}
}

return (x);

}
