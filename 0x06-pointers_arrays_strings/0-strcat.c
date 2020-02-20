#include "holberton.h"
/**
 *_strcat - function that concatenates two strings
 *@dest: char
 *@src: char
 *Returne: dest
 */
char *_strcat(char *dest, char *src)
{ 
int i = 0, j = 0, k = 0, l = 0;

while (src[i] != '\0')
i++;
while (dest[j] != '\0')
j++;

for (k = j ; k < ( j + i); k++, l++)
{
dest[k] = src[l];
}

return (dest);
}
