#include "holberton.h"

/**
 *_strstr-  function that locates a substring.
 *@haystack : poitner of char
 *@needle : pointer of char
 *Return: s
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, l = 0, k = 0, x = 0, y = 0;

while (needle[k] != '\0')
k++;
while (haystack[l] != '\0')
l++;

for (i = 0; i <= l; i++)
{
for (j = 0; j <= k; j++)
{
if (haystack[i] == needle[j])
{
while (haystack[x] == needle[y])
{
x++;
y++;
}
if (x == y)
return (needle);
else 
break;
}
}


}

return (0);
}
