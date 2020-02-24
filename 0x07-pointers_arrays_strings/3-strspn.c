#include "holberton.h"

/**
 *int _strspn- function that gets the length of a prefix substring.
 *@s : poitner ofchar
 *@accept : pointer char
 *Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;

while (s[i] != '\0' && accept[i] != '\0')
{
if (s[i] == accept[i])
break;

i++;
} 


return (i+1);
}
