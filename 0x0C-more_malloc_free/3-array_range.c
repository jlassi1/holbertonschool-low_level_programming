#include "holberton.h"
#include <stdlib.h>
/**
 *array_range -creates an array of integers.
 *@min: integer min
 *@max: integer max
 *Return: pointer of unsigned int
 */

int *array_range(int min, int max)
{
int *num = 0;
int i = 0, lenth = 0;

if (min > max)
return (NULL);
lenth = max - min + 1;
num = malloc(sizeof(int) * lenth);

if (num == NULL)
return (NULL);
for (i = 0; i < lenth; i++)
num[i] = min + i;



return (num);
}
