#include "lists.h"
/**
  *reverse_listint-reverses a listint_t linked list
  *@head: pointer to head of linked list
  *
  *Return: linked list
  */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *current = *head, *next = NULL;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}
*head = prev;
return (*head);
}
