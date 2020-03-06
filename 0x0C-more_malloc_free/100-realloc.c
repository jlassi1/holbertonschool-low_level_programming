#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc- eallocates a memory block using malloc and free
 *@old_size: unsigned integer
 *@new_size: unsigned integer
 *@ptr: pointer 
 * 
 *Return: pointer 
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size);
if(ptr == NULL)
return (NULL);
if (old_size == new_size)
return (ptr);
if (old_size < new_size)
{
new_size = old_size + (new_size - old_size);
free (ptr);
ptr = malloc (new_size);
return (ptr);
}
if (new_size == 0)
{
ptr = NULL;
free(ptr);
return (NULL);
}


return (ptr);
}