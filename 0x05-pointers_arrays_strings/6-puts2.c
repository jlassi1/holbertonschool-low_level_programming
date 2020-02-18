#include "holberton.h"
/**
 *puts2- prints every other character starting with the first character
 *@str : char
 *
 */
void puts2(char *str)
{
int i, k;

while (str[i] != '\0')
{
i++;
}
for (k = 0; k < i; k += 2)
{
_putchar(str[k]);

}
_putchar('\n');


}
