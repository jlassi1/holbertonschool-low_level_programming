#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_char(va_list arg);

typedef struct format
{
char *x;
void (*print_format)();
} format_t;



void print_all(const char * const format, ...);




#endif