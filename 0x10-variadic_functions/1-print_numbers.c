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

int num[n];
unsigned int i;

va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
num[i] = va_arg(arg, const int);
if (separator == NULL)
printf("%d", num[i]);
else
printf("%d%s", num[i], separator);
}
printf("\n");
va_end(arg);


}