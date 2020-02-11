#include "holberton.h"

/**
 *times_table(void) - prints the 9 times table, starting with 0.
 *@i, @j : time
 * Return: void
 */
void times_table(void)
{
int i, j, k;
for (i = 0 ; i < 10 ; i++)
{

for (j = 0 ; j < 10 ; j++)
{

k = j * i;
if (k < 10 && j < 9)
{

_putchar(k % 10 + '0');
_putchar(44);
_putchar(' ');
_putchar(' ');
}

else if (k >= 10 && j < 9)
{
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
_putchar(44);
_putchar(' ');

}
else if (k / 10 != 0 && j == 9)
{
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
else 
{

_putchar(k / 10 + '0');

}

}


_putchar('\n');

}
}
