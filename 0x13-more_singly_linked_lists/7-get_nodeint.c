#include "lists.h"
/**
  *get_nodeint_at_index- get node at index
  *@head:  nodes of linked list
  *@index: index of node
  *
  *Return: node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int n = 0;
while (head != NULL)
{
if (n == index)
return (head);
head = head->next;
n++;
}
return (NULL);

}
