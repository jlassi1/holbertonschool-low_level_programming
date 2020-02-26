#include "holberton.h"
/**
 *_strlen_recursion -function that returns the length of a string
 *@s: pointer of char
 *Return: integer (n)
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n += 1 + _strlen_recursion(++s);
return (n);
}
return (n);
}
