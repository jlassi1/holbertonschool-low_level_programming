#include "holberton.h"
/**
 *leet- function that encodes a string into 1337..
 *@s: char
 *Return: s
 */
char *leet(char *s)
{
int i = 0, j = 0;
int num[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
char alpha [] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};


for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (s[i] == alpha[j])
s[i] = num[j] + '0';

else
continue;
}
}

return (s);
}
