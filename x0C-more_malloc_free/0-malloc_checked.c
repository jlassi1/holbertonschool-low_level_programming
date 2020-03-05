#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked -allocates memory using malloc
 *@b: unsigned integer
 *
 *Return: x
 */

void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);
if (x == NULL)
exit(98);

return (x);


}
