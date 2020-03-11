#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator -print element of an array
  *@array: array of integer
  *@size: size of array
  *@action: function action
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i = 0;
if (array == NULL)
return;

while (i < size)
{
action(array[i]);
i++;
}
}
