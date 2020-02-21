#include "holberton.h"
/**
 * print_number - prints an integer.
 *@n: integre
 * Return: void
 */
void print_number(int n)
{
int i, a[10];
unsigned int j = 0;
j = n;
if (n < 0)
{
j = -n;
_putchar('-');
}
if (n != 0)
{
for (i = 0; j > 0; i++)
{
a[i] = j % 10;
j = j / 10;
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
