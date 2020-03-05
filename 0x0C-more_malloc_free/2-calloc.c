#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array,
 *@nmemb: unsigned integer
 *@size: unsigned integer
 *Return: pointer of unsigned int
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int *num = NULL;
/*unsigned int i, j, x = 0;*/

if (nmemb == 0 || size == 0)
return (NULL);

num = malloc(nmemb * size);

if (num == NULL)
return (NULL);


return (num);
}
