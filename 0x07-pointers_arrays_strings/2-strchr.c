#include "holberton.h"

/**
 *_strchr- a function that locates a character in a string.
 *@s : poitner ofchar
 *@c : char
 *Return: s
 */

char *_strchr(char *s, char c)
{
int i = 0;
char *x = "NULL";
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
x = &s[i];
return (x);

}

}

return (x);
}
