#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters
 * @n: const unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;

unsigned int i, sum = 0;

va_start(arg, n);

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg(arg, int);

va_end(arg);

return (sum);

}
