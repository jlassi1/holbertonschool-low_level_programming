#include "holberton.h"

/**
 *_strspn- function that gets the length of a prefix substring.
 *@s : poitner ofchar
 *@accept : pointer char
 *Return: n
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0, n = 0, j = 0;

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n = n + 1;
break;
}

}
if (s[i] != accept[j])
break;

}
return (n);
}
