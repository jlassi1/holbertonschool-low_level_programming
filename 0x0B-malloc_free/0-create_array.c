#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array -creates an array of chars
 *@size: unsigned integer
 *@c : char
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = malloc(size * sizeof(char));
for (i = 0; i <= size; i++)
{
array[i] = c;
}
return (array);

}
