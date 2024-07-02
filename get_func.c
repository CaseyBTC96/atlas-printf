#include "main.h"

/**
 * get_func - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	int i = 0;
	spec arr[] = {/*struct containg function name and their idintifiers*/
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};
	while (arr[i].valid)/*loop through struct and returns function*/
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
