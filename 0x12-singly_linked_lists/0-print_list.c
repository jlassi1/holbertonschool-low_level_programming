#include "lists.h"


/**
  *print_list -  prints all the elements of a list_t list
  *@h: pointer to const structure
  *Return: nbr of elements
  * 
  */
size_t print_list(const list_t *h)
{
char *s = h->str;
unsigned int x = h->len, i = 1;

if (s == NULL)
{
s = "(nil)";
x = 0;
}
printf("[%d] %s\n", x, s);

list_t *next = h->next;
while (h->next != NULL)
{
s = next->str;
x = next->len;
printf("[%d] %s\n", x, s);
i++;
h = next;
}

return (i);
}
