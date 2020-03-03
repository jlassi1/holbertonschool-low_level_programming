#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function that returns a pointer to a newly allocated space in memory
 *@str : char
 *Return: char
 */
char *_strdup(char *str)
{
char *array;
unsigned int i, j = 0;

while (str[j] != '\0')
j++;

if (j == 0)
return (0);

array = malloc(j * sizeof(char));
for (i = 0; i <= j; i++)
{
array[i] = *str;
}
free (array);
return (array);

}
