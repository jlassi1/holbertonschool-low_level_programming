#include "holberton.h"

/**
 *_strstr-  function that locates a substring.
 *@haystack : poitner of char
 *@needle : pointer of char
 *Return: s
 */

char *_strstr(char *haystack, char *needle)
{
int i = 0, l = 0, k = 0, x = 0, j = 0;

while (needle[k] != '\0')
k++;
while (haystack[l] != '\0')
l++;

for (i = 0; i <= l; i++)
{

if (haystack[i] == needle[0])
{
for (j = 0; j <= k; j++)
{
while (haystack[i] == needle[j] && needle[j] != '\0' && haystack[i] != '\0')
{
x++;
i++;
}
}
if (x == k)
return (needle);
else 
break;

}
}



return (0);
}
