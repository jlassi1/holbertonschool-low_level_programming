#include "holberton.h"
/**
 *rot13 - function that encodes a string using rot13.
 *@s: char
 *Return: s
 */
char *rot13(char *s)
{
int i = 0, j = 0;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = rot[j];
break;
}
else
s[i] = s[i];

}


}

return (s);
}
