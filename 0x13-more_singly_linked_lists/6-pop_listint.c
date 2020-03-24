#include "lists.h"
/**
  *pop_listint-deletes the head node of a listint_t linked list
  *@head: nodes of linked list
  *Return: he head node’s data (n)
  */
int pop_listint(listint_t **head)
{
listint_t *temp;
int x = 0;

temp = *head;
if (temp == NULL)
return (0);

*head = (*head)->next;
x = temp->n;
free(temp);

return (x);

}
