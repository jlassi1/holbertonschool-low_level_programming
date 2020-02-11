#include "holberton.h"

/**
 *print_sign - print the digne of number.
 *@n : sign of a number
 *Description:Write a function that prints the sign of a number.
 * Return:1 else return:0
 */
int print_sign(int n)
{

if (n > 0)
{
_putchar(43);
return (1);

}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
