#include "lists.h"

/**
  *list_len - give the number of elements in a linked list_t list
  *@h: pointer to const structure
  * 
  *Return: nbr of element 
  */
size_t list_len(const list_t *h)
{
list_t *NEXT = h->next;
size_t n = 1;
while (h->next != NULL)
{
h = NEXT;
n++;
}


return (n);

}