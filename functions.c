#include "main.h"
#include <stdio.h>
#include <tdarg.h>
/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_args(args, int);
	retrun (_putchar(c));
}
/**
 * print_s - prints a string
 * @args: string argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_args(args, char*);
	if (str == NULL)
		ssr = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
/**
 * print_percent - pass the percent sign
 * @args: string argument
 * Return: return percent sign
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_args(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
