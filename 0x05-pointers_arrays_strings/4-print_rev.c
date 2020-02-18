#include "holberton.h"
/**
 *print_rev - prints a string, in reverse
 *@s : char
 *
 */
void print_rev(char *s)
{
int j, i = 0;

while (s[i] != '\0')
{
i++;
}
i = i - 1;
for (j = 0; j <= i; j++)
{
_putchar(s[i - j]);
}
_putchar('\n');


}
