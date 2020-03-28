#include "lists.h"
/**
 *free_listint_safe- free linked list
 *@h: pointer to the hear of linked list
 *
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp, *node;
size_t i = 0;
node = *h;
temp = *h;
if (h == NULL)
return (i);
	while (node != NULL)
	{

		if (temp <= node->next)
		{
			free(temp);
			i++;
			break;
		}

		temp = node->next;
		free(node);
		node = temp->next;
			i++;
	}
*h = NULL;
return (i);

}
