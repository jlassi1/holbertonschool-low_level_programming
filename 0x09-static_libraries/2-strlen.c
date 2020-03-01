#include "holberton.h"
/**
 * _strlen -that returns the length of a string.
 *@s: char
 * Return: i
 */
int _strlen(char *s)
{
int i;

while (s[i] != '\0')
{
i++;
}
return (i);
}
