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

if (separator == NULL && i + 1 == n)
printf("%s", strg);

else if (strg == NULL && i != n - 1)
printf("(nil)%s", separator);
else if (strg == NULL && i == n -1)
printf("(nil)")
else if (strg != NULL && separator != NULL && i + 1 != n)
printf("%s%s", strg, separator);
}
printf("\n");
va_end(arg);
}

