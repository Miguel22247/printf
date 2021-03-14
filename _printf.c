#include "holberton.h"
/**
 * _printf - is a function that prints
 * @format: gives the format to the function
 * cases - d, i, s, c, %
 * Return: a string.
 */
int _printf(const char *format, ...)
{
        int i;
/* in case that doesn't contain nothing == NULL*/
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				_putchar (format[i]);
			if (format[i + 1] == 'c')
				_putchar(format[i + 1]);
                        if (format[i + 1] == 's')
				_putchar(format[i + 1]);
			if (format[i + 1] == 'd')
				_putchar(format[i + 1]);
			if (format[i + 1] == 'i')
				_putchar(format[i + 1]);
/*string magical shenanigans happen here */
                i++;
		}
                _putchar(format[i]);
		i++;
        }
        return (*format);
}
