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

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
s = &s[i];
return (s);
break;
}
else
continue;
}

return ("NULL");
}
