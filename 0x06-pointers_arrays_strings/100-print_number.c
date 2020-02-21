#include "holberton.h"
/**
 * print_number - prints an integer.
 *@n: integre
 * Return: void
 */
void print_number(int n)
{
int i, a[10];
unsigned int u = 0;

u = n;
if (n < 0)
{
u = -n;
_putchar('-');
}
if (n != 0)
{
for (i = 0; u > 0; i++)
{
a[i] = u % 10;
u = u / 10;
}
while (i > 0)
{
_putchar(a[i - 1] + '0');
i--;
}
}

else
_putchar('0');
}
