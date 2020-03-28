#include "lists.h"
/**
 *free_listint_safe- free linked list
 *@h: pointer to the hear of linked list
 *
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *temp;
size_t i = 0;

temp = *h;
if (h == NULL)
return (i);
	while (temp)
	{

		if (temp <= temp->next)
		{
			free(temp);
			i++;
			break;
		}

		*h = temp->next;
		free(temp);
		temp = *h;
			i++;
	}
*h = NULL;
return (i);

}
