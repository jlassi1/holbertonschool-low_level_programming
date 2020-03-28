#include "lists.h"
/**
 *find_listint_loop - find loop in linked list
 *@head: pointer to linked list
 *
 *Return: node when start the loop or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_p = head, *fast_p = head, *temp = NULL;


while (slow_p && fast_p && fast_p->next)
{
slow_p = slow_p->next;
fast_p = fast_p->next->next;
if (slow_p == fast_p)
break;
}
if (fast_p != slow_p)
return (NULL);

else
slow_p = head;

while (slow_p != fast_p)
{

			slow_p = slow_p->next;
			temp = fast_p;
			while (fast_p->next != temp && fast_p != slow_p)
				fast_p = fast_p->next;

		if (slow_p == fast_p)
			return (slow_p);

}

return (NULL);
}
