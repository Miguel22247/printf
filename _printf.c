#include "holberton.h"
/**
 * _printf - is a function that prints
 * @format: gives the format to the function
 * cases - d, i, s, c, %
 * Return: a string.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int length = 0;
	int i = 0, j;

	pr_f ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_mod},
		{"d", print_d},
		{"i", print_d},
		{"r", print_r},
		{NULL, NULL}
	};
	va_start(ap, format);
	if (!format)
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		if (format[i] == '%')
		{
			i += 1;
			while (ops[j].op != NULL)
			{
				if (format[i] == ops[j].op[0])
				{
					length += ops[j].f(ap);
					break;
				}
				j++;
			}
		}
		else
		{
			length += _putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (length);
}
