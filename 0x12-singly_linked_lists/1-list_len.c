#include "lists.h"

/**
  *list_len - give the number of elements in a linked list_t list
  *@h: pointer to const structure
  *
  *Return: nbr of element
  */
size_t list_len(const list_t *h)
{
size_t n = 0;
if (h == NULL)
return (n);


while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
