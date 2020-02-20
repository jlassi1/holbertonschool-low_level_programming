#include "holberton.h"
/**
 *_strncat- function that concatenates two strings
 *@dest: char
 *@src: char
 *@n: integer
 *Returne: dest
 */
char *_strncat(char *dest, char *src, int n)
{ 
int i = 0, j = 0, k = 0;


while (dest[i] != '\0')
{

i++;
}

for (k = i; k < i +n; k++)
{

dest[k] = src[j];
j++;
if (dest[k] == '\0')
break;
}



return (dest);
}
