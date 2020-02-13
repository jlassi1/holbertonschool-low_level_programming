#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *@size: integer
 * Return: 0.
 */


void print_triangle(int size)
{
int i, j, n;
if (size <= 0)
_putchar('\n');
else

for (j = 0; j < size; j++)
{
for (i = 1; i < size - j; i++)
{
_putchar(' ');

}
for (n = size - j; n <= size; n++)
{
_putchar('#');
}
_putchar('\n');
}

}
