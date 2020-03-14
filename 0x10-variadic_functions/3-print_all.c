#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_int - print integer
  *@arg: argument of compare
  */
void print_int(va_list arg)
{
printf("%d", va_arg(arg, int));
}
/**
  *print_float - print float
  *@arg: argument of compare
  */
void print_float(va_list arg)
{
printf("%f", va_arg(arg, double));
}
/**
  *print_string - print string
  *@arg: argument of compare
  */
void print_string(va_list arg)
{
char *s;
s = va_arg(arg, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
}
/**
  *print_char - print character
  *@arg: argument of compare
  */
void print_char(va_list arg)
{

printf("%c", va_arg(arg, int));
}
/**
 * print_all -  prints anything, followed by a new line.
 * @format: type of argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
va_list arg;

int k = 0, l = 0;
char *coma_0 = "";
char *coma_1 = ", ";
format_t type[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string},
{NULL, NULL}
};


va_start(arg, format);


while (format[k] != '\0' && format == NULL)
{
while (type[l].x != NULL)
{
if (format[k] == *(type[l].x))
{
printf("%s", coma_0);
(type[l].print_format)(arg);
coma_0 = coma_1;
}
l++;
}
k++;
l = 0;
}
printf("\n");
va_end(arg);
}
