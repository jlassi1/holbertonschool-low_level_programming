#include "holberton.h"
/**
 *puts_half- prints second half of a string
 *@str : char
 *
 */
void puts_half(char *str)
{
int i = 0, k, x = 0;

while (str[i] != '\0')
{
i++;
}
if ( i % 2 == 0)
{
x = i / 2;
}
else 
{
x = i / 2 + 1;
}
for (k = x; k < i; k++)
{
_putchar(str[k]);
}
_putchar('\n');


}
