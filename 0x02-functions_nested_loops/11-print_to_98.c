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
int i;
if (n > 98)
{
	for (i = n; i > 97; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
else	
{
	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
printf("\n");
	
}
