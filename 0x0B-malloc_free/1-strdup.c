#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str : char
 *Return: char
 */
char *_strdup(char *str)
{
char *array;
unsigned int i, j = 0;
if (str == NULL)
return (NULL);

while (str[j] != '\0')
j++;

array = malloc((j + 1) * sizeof(char));
if (/*j == 0 || */array == NULL)
return (NULL);

for (i = 0; i <= j; i++)
{
array[i] = str[i];
}
array[i] = '\0';
return (array);

}
