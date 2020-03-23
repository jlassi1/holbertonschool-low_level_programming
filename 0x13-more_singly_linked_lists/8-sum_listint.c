#include "lists.h"
/**
  *sum_listint-sum of all the data (n) of a listint_t
  *@head:  nodes of linked list
  *
  *Return: sum
  */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL && head->next != NULL)
{
head = head->next;
sum += head->n;
}

return (sum);
}
