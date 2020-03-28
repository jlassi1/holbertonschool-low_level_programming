#include "lists.h"
/**
 *free_listint_safe- free linked list
 *@h: pointer to the hear of linked list
 *
 *Return: nbr of node
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp, *node;
size_t i = 0;
node = *h;
if (h == NULL)
return (i);
	while (node != NULL)
	{

		temp = node->next;
		free(node);
		node = temp->next;
			i++;
		if (temp <= node)
		{
			free(temp);
			i++;
			break;
		}
	}
*h = NULL;
return (i);

}
