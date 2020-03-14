#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: separator between num
 * @n: num of int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list arg;

int num;
unsigned int i;


va_start(arg, n);


for (i = 0; i < n; i++)
{
num = va_arg(arg, const int);
if (separator == NULL || i == n - 1)
printf("%d", num);
else
printf("%d%s", num, separator);
}

printf("\n");
va_end(arg);
}
