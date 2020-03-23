#include "lists.h"
/**
  *pop_listint-deletes the head node of a listint_t linked list
  *@head: nodes of linked list
  *Return: he head node’s data (n)
  */
int pop_listint(listint_t **head)
{
listint_t *temp;
temp = *head;
if (temp == NULL)
return (0);
if (temp->next != NULL)
{
*head = temp->next;
free(temp);
}
else
{
*head = NULL;
free(temp->next);
free(temp);
}

return (temp->n);
}
