#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr- concatenates all the arguments of your program.
 *@av : pointer of char
 *@ac : integer
 *Return: pointer 
 */
char *argstostr(int ac, char **av)
{
char *a = NULL;
int i = 0, j = 0, lenth = 0, x = 0; x = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
lenth++;
lenth++;

}                                                                                              


if (av == NULL)
return (NULL);

for (j = 0; j <= ac; j++)
a = malloc(ac* sizeof(char));

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
a[x] = av[i][j];
x++;
}
a[x] = '\n';
x++;
}
a[x] = '\0';
return (a);
}
