#include "holberton.h"
/**
 *cap_string- function that capitalizes all words of a string.
 *@s: char
 *Return: s
 */
char *cap_string(char *s)
{
int i = 0, j = 0;
char a[] = {'.', ',', ';', '!', '?', '"', '(', ')', '{', '}', ' ', '\n'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] != a[j])
continue;


else if (s[i + 1] >= 97 && s[i + 1] <= 122)
s[i + 1] = s[i + 1] - 32;

else
continue;

}
}
return (s);
}