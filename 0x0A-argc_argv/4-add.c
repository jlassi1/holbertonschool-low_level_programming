#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *Return:  0
 */
int main(int argc, char *argv[])
{
unsigned int x = 0;
int i;
/*argc = strlen(*argv);*/
for (i = 1; i < argc ; i++)
{

x += atoi(argv[i]);


if (!(atoi(argv[i])))
break;
}
if (i == argc)

printf("%d\n", x);

if (i != argc)
printf("Error\n");


return (0);
}

