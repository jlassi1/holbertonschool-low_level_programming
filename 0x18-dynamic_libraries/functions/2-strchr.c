#include "holberton.h"

/**
 *_strchr- a function that locates a character in a string.
 *@s : poitner ofchar
 *@c : char
 *Return: s
 */

char *_strchr(char *s, char c)
{
int i = 0, j = 0;
while (s[j] != '\0')
j++;

for (i = 0; i <= j; i++)
{
if (s[i] == c)
{
/*s = &s[i];*/
return (&(s[i]));

}

}

return (0);
}
