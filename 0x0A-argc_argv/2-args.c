#include "holberton.h"
#include <stdio.h>

/**
 *main - main function
 *@argc: size of array of command
 *@argv: array of command
 *Return:  0
 */
int main(int argc, char *argv[])
{
(void) argc;
while (*argv)
{
printf("%s\n", *argv);
argv++;
}
return (0);
}
