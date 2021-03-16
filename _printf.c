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
	if (!format)
		return (-1);
	va_start(ap, format);
	for (i = 0; format [i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
			{
				_putchar(format[i]);
				length++;
			}
			for (j = 0; (ops + j)-> op != NULL; j++)
			{
				if (format[i] == *(ops + j)->op)
					length += (ops + j)->f(ap);
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
	}
	va_end(ap);
	return (length);

}
