#include "holberton.h"

/**
 *print_sign(int n) print the digne of number.
 *int n
 *Description:Write a function that prints the sign of a number.
 * Return:1
 * else returne:0
 */
int _abs(int n)
{

if (n > 0)
{
_putchar(n);
return (0);

}
else if (n == 0)
{
_putchar(n);
return (1);
}
else
{
n = -1*n;
_putchar(n);
return (1);
}
}
