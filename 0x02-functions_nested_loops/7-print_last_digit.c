#include "holberton.h"

/**
 *print_last_digit - print the last digit of a number.
 *@n: last digit of a number
 *Description:Write a function that prints the last digit of a number.
 * Return:n
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
	_putchar(-n + '0');
	return (-n);
}
else
{
	_putchar(n + '0');
	return (n);
}
}
