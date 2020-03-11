#include "function_pointers.h"
#include <stdlib.h>

/**
  *
  * 
  * 
  * 
  */
 void array_iterator(int *array, size_t size, void (*action)(int))
{
long unsigned int i = 0;
if (array == NULL)
return;
while (i < size)
{
action(array[i]);
i++;
}

}