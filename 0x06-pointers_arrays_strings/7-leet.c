#include "holberton.h"
/**
 *leet- function that encodes a string into 1337..
 *@s: char
 *Return: s
 */
char *leet(char *s)
{
int i = 0, j = 0;
char a[15] = {'a', 'A', '4', 'e', 'E', '3', 'o', 'O', '0', 't', 'T', '7', 'l', 'L', '1'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j] && (j != 2 && j != 5 && j != 8 && j != 11 && j != 14))
{
s[i] = a[j + 1];
i--;

}
else
continue;
}
}

return (s);
}
