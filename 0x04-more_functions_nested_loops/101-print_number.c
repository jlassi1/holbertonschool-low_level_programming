#include "holberton.h"
/**
 * print_number: prints an integer.
 *@n: integre
 * Return: void
 */
 void print_number(int n)
{
int i,  j, x = 1;

if (n < 0 && n != -2147483648) 
{
_putchar('-');
n = - n;
}
if (n > 10)
{
j = n;
while (j >= 10)
{
x = x * 10;
j = j / 10;
}

for (i = x; i >= 1; i = i / 10)
{
_putchar(n / i  + '0');
n = n % i;
}
}
else 
_putchar(n + '0');

_putchar('\n');

if (n == -2147483648)
{
_putchar('-');
n = - (n + 1);

j = n;
while (j >= 10)
{
x = x * 10;
j = j / 10;
}
if ( n >= 10)
{
for (i = x; i > 1; i = i / 10)
{
_putchar((n / i)  + '0');
n = n % i;
}
} 

_putchar(n + 1 + '0');

}
_putchar('\n');
}

