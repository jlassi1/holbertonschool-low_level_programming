#include "lists.h"
/**
  *free_list - free linked lists
  *@head: node
  *
  */
void free_list(list_t *head)
{
list_t *node;

while (head != NULL)
{
node = head->next;

free(head->str);
free(head);

head = node;
}

}
