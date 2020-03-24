#include "lists.h"
/**
  *free_listint2-frees a listint_t list.
  *@head: nodes of linked list
  *
  */
void free_listint2(listint_t **head)
{

listint_t *node;
if (head != NULL)
{
while (*head != NULL)
{
node = (*head)->next;
free(*head);
*head = node;
}
*head =  NULL;
}
}
