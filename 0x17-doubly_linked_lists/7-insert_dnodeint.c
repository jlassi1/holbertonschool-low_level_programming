#include "lists.h"
/**
 *insert_dnodeint_at_index-inserts a new node at a given position.
 *@h: pointer to the doubely linkedlist
 *@idx:  is the index of the list where the new node should be added
 *@n: the data of new node add
 *
 *Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp = *h, *newnode = malloc(sizeof(dlistint_t));
unsigned int i = 0;
	if (newnode == NULL || (*h == NULL && idx != 0))
		return (NULL);

newnode->n = n;
newnode->next = NULL;
newnode->prev = NULL;

	if (idx == 0)
	{
		newnode->n = n;
		newnode->next = (*h);
		newnode->prev = NULL;
		(*h) = newnode;
		return (newnode);
	}
	while (tmp)
	{


		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			newnode->n = n;
			tmp->next = newnode;
			return (newnode);

		}

		tmp = tmp->next;
		i++;
	}

return (NULL);

}

