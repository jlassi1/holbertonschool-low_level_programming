#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1 : char
 *@s2 : char
 *Return: char
 */
int **alloc_grid(int width, int height)
{
int **array;
int i = 0, j = 0;
if (width <= 0 || height <= 0)
return (NULL);

array = malloc((width * height) * sizeof(int));
if (*array == NULL)
return (NULL);
for (i = 0; i <= height; i++)
{
for(j = 0; j <= width; j++)
{
*array = 0;
}
}
array [j] = '\0';

return (array);

}
