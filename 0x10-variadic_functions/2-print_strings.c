#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: separator between num
 * @n: num of int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

char *strg;
unsigned int i;

va_list arg;
va_start(arg, n);

for (i = 0; i < n; i++)
{
strg = va_arg(arg, char *);

if (strg == NULL)
printf("(nil)");
else
printf("%s", strg);
if (separator == NULL ||i + 1 == n)
break;
else
printf("%s", separator);
}
printf("\n");
va_end(arg);
}

