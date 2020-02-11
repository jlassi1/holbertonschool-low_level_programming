#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print the returns to 98
 * @n:  integer
 *
 * Return: 98
 */

void print_to_98(int n)
{

for (;n >= 98; n--)
{
	printf("%d", n);
if (n != 98)
{
	printf(", ");
}
 }

printf("\n");	
	
for (;n <= 98; n++)
{
	printf("%d", n);
if (n != 98)
{
	printf(", ");
}
}
printf("\n");
	
}
