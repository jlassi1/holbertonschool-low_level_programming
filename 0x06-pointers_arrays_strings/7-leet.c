#include "holberton.h"
/**
 *leet- function that encodes a string into 1337..
 *@s: char
 *Return: s
 */
char *leet(char *s)
{
int i = 0, j = 0;
char a[] = "aAeEoOtTlL";
char num[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
s[i] = num[j];

continue;
}
}

return (s);
}
