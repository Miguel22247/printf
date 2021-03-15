#include "holberton.h"
/**
 * print_c - print a character
 * @list: list
 * Return: a character
 */

int print_c(va_list list)
{
	char *c = va_arg(list, char *);

	write(1, &c, 1);
	va_end(list);
	return (1);
}
/**
 * print_s - prints a string
 * @list: list
 * Return: a string
 */

int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int i;

	if (str == NULL)
	{
		str = "(null)";
		return (-1);
	}
	else
	{
		for (i = 0; str[i]; i++)
			_putchar(str[i]);
		return (*str);
	}
}
/**
 * print_mod - print a '%' sign
 * @list: list
 * Return: a '%' sign
 */

int print_mod(va_list list)
{
	char c = '%';

	write(1, &c, 1);
	va_end(list);
	return (1);
}

/**
 * _strlen - Checks how long is a string
 * @s: String
 * Return: 0 or the length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		else
	{
		return (1 + _strlen(s + 1));
	}
}

