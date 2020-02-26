#include "holberton.h"
/**
 *_print_rev_recursion -function that prints a string in reverse
 *@s: pointer of char
 *
 */
void _print_rev_recursion(char *s)
{

if (*s != '\0')
{
s++;
_print_rev_recursion(s--);
_putchar(*s);
}

}
