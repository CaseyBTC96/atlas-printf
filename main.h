#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.g>
/**
 * struct specifier - struct specifier.
 * @valid: the valid character.
 * @f: the function associated.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
}  spec;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
#endif 
