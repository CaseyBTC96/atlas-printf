#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);/*calls variadic function*/
	return (_putchar(c));
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
	str = va_arg(args, char*);/*calls variadic function*/
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')/*prints null if empty else print normally*/
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
	if (va_arg(args, int) == *str)/*prints %*/
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: Decimal argument
 * Return: counter
 */
int print_d(va_list args)
{
	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(args, int);/*calls variadic function*/
		if (n < 0)
			{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;
	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */
int print_i(va_list args)
{
	return (print_d(args));
}
