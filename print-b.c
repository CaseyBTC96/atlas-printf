#include "main.h"
/**
 * print_b - converts unsigned int to binary
 * @args: the number
 * Return: binary and 0 on false.
*/
int print_b(va_list args)
{
	int binaryprint[25], number_check = va_arg(args, int), loop = 0;

	if (!number_check)/*checks for unsinged int*/
		return (0);
	while (1)
	{
		if ((number_check % 2) == 1)
			binaryprint[loop] = 1;
		else
			binaryprint[loop] = 0;
		number_check = number_check / 2;
		if (number_check == 0)
			break;
		else
			loop++;
	}
	while (loop != 0)
	{
		_putchar(binaryprint[loop] + '0');
		loop--;
	}
	_putchar(binaryprint[loop] + '0');
	return (1);
}
