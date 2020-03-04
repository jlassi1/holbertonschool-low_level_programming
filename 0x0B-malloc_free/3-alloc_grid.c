#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width : int
 *@height: int
 *Return: int
 */
int **alloc_grid(int width, int height)
{
int **array;
int j = 0, i = 0;

if (width <= 0 || height <= 0)
return (NULL);

array = malloc(height * sizeof(int *));
if (array == NULL)
return (NULL);

for (j = 0; j < height ; j++)
{
array[j] = malloc(width * sizeof(int));
if (array[j] == NULL)
{
for (i = 0; i < j; i++)
free(array[i]);
free(array);
return (NULL);
}
}


return (array);

}
