#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *main -program that performs simple operations
  *@argc: size of argument
  *@argv: argument
  *
  *Return: result or error
  */

int main(int argc, char **argv)
{
char *div = "/";
char *mod = "%";
int a = 0, b = 0, result = 0;
int (*function)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (*argv[3] == '0' && (*argv[2] == *div || *argv[2] == *mod))
{
printf("Error\n");
exit(100);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
function = get_op_func((argv[2]));
result = function(a, b);
printf("%d\n", result);
return (0);
}
