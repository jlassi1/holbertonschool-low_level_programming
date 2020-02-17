#include "holberton.h"
/**
 *rev_string -a function that reverses a string
 *@s : char.
 *
 */
void rev_string(char *s)
{
int  k = 0, x, i = 0;
char str[509];


while (s[i] != '\0')
{
str[i] = s[i];
i++;
}
x = i;
for (k = 0; k <= x - 1; k++)
{
s[k] = str[i - 1];
i--;
}




}
