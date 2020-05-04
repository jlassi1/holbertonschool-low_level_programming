#include "lists.h"
/**
  *listint_len - count the number of elements in a linked
  *@h: nodes of linkes lists
  *
  *Return: nbr of nosdes
  */
size_t listint_len(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{

h = h->next;
n++;
}
return (n);
}

