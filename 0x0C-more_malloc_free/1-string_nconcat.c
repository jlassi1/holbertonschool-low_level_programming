#include "holberton.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings.
 *@n: unsigned integer
 *@s1: pointer of char
 *@s2: pointer of char
 *Return: pointer of char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3 = NULL;
unsigned int i, j, x = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
{
}

s3 = malloc(sizeof(char) * (i + n + 1));

if (s3 == NULL)
return (NULL);

for (j = 0; j < i; j++)
s3[j] = s1[j];

for (; j < n + i; j++)
{
s3[j] = s2[x];
x++;
}
return (s3);
}
