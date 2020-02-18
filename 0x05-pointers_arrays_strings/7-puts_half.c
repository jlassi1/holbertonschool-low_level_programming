#include "holberton.h"
/**
 *puts_half- prints second half of a string
 *@str : char
 *
 */
void puts_half(char *str)
{
int i, k;

while (str[i] != '\0')
{
i++;
}

for (k = i / 2; k < i; k++)
{
_putchar(str[k]);

}
_putchar('\n');


}
