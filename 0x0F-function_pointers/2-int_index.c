#include "function_pointers.h"
#include <stdlib.h>
/**
  *int_index - func to return index of cmp
  *@array: array of integer
  *@size: size of array
  *@cmp: func compare
  */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
for (i = 0; i <= size; i++)
{
if (cmp(array[i]) == 1)
{
if (i == 0)
return (1);
else
return (i);
}
if (i == size - 1)
return (-1);
}
return (0);
}
