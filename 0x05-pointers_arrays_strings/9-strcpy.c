#include "holberton.h"
/**
 *puts2- prints every other character starting with the first character
 *@str : char
 *
 */
char *_strcpy(char *dest, char *src)
{
char p[509];
int i =0, j;
src = &p;
while (p[i] <= '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
src[j] = p[j];
}
dest = &src[j];
return (dest);

}
