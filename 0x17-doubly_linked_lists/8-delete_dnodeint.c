#include "lists.h"
/**
 *delete_dnodeint_at_index-deletes the node at index index of a linked list.
 *
 *@h: pointer to linkedlist
 *@idx: index of the node a delet
 *
 *
 *Return:1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{

dlistint_t *tmp = *h;
unsigned int i = 0;
	if (*h == NULL || h == NULL)
		return (-1);

	if (idx == 0)
	{
		tmp = tmp->next;
		if (tmp != NULL)
			tmp->prev = NULL;
		free(tmp);
		return (1);
	}
	while (tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < idx)
		return (-1);

	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

free(tmp);


return (1);

}
