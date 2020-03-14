#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: const unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
if (n == 0)
return (0);

va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)

sum += va_arg(arg, const int);

va_end(arg);
return (sum);

}
