#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - recreates the printf function.
 * @format: string with format specifier.
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	if (format != NULL)/*checks if empty*/
	{
		int count = 0, i = 0;
		int (*m)(va_list);
		va_list args;

		va_start(args, format);
		if (format[0] == '%' && format[1] == '\0')/*exits if no specifier*/
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')/*looks for % in format*/
			{
				if (format[i + 1] == '%')/*if %% print %*/
				{
					count += _putchar(format[i]);
					i += 2;
				}
				else
				{
					m = get_func(format[i + 1]);/*sets funtion in funtion pointer*/
					if (m)
						count += m(args);/*calls function*/
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);/*prints unkown command*/
					i += 2;
				}
			}
			else
			{
				count += _putchar(format[i]);/*prints the rest of string*/
				i++;
			}
		}
		va_end(args);
		return (count);
	}
	return (-1);
}
