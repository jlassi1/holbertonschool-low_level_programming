#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(size*sizeof(char));
for(i = 0; i <= size; i++)
{
array[i] = c;
}
return(array);

}
