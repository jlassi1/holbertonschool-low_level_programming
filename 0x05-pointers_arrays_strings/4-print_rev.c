#include "holberton.h"
/**
 *
 *
 *
 */
void print_rev(char *s)
{
int j, i = 0;

while (s[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
_putchar(s[i-j]); 

_putchar('\n');


}
