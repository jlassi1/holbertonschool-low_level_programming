#include "holberton.h"
/**
 * print_number - prints an integer.
 *@n: integre
 * Return: void
 */
void print_number(int n)
{
int i, j;
int a[10];
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
_putchar('\n');
}
else
_putchar('0');
_putchar('\n');


}
