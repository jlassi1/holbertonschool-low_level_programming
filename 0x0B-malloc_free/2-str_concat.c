#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - concatenates two strings.
 *@s1 : char
 *@s2 : char
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
char *array;
unsigned int i = 0, j = 0, k, l = 0, x = 0;
if (s1 == NULL && s2 == NULL)
return (NULL);

while (s1[j] != '\0')
j++;
while (s2[i] != '\0')
i++;

array = malloc((i + j + 1) * sizeof(char));
if (array == NULL)
return (NULL);

for (k = 0; k <= j; k++)
{
array[k] = s1[k];
}
for (l = j; l <= i + j; l++)
{
array[l] = s2[x];
x++;
}


/*array[l] = '\0';*/
return (array);

}
