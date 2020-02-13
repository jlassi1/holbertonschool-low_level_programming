#include "holberton.h"

/**
 * more_numbers - prints the numbers, from 0 to 14.
 *
 * Return: void.
 */


void more_numbers(void)
{
int c, n, x;
x = 1;
for (n = 0; n < 10; n++)
{

for (c = 0; c <= 14; c++)
{

if (c >= 10)
{
x = 10;
}
_putchar(c / x + '0');

if (c >= 10)
{
_putchar(c % 10 + '0');
}
x = 1;
}
_putchar('\n');
}

}
