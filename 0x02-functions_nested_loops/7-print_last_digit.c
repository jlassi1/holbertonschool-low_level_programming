#include "holberton.h"

/**
 *print_last_digit(int n)print the last digit of a number.
 *int n
 *Description:Write a function that prints the last digit of a number.
 * Return:1
 * else returne:0
 */
int print_last_digit(int n)
{

if (n < 10)
{
_putchar(n);

}
else
{
n = n%10;
_putchar(n);
}
return (0);
}
