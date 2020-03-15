#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - a variadic function that prints any given input
 * @format: a list of eligible types
 * Return:
 */
void print_all(const char * const format, ...)
{
va_list arg;
int i = 0, j = 0;
char *s;

va_start(arg, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg, int));
				j = 1;
				break;
			case 'i':
				printf("%i", va_arg(arg, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				j = 1;
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				j = 1;
				break;
			default:
				j = 0;
		}
		if ((j) && (format[i + 1] != '\0'))
			printf(", ");
	i++;
	}
printf("\n");
va_end(arg);
}
