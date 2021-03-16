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
	int i;
	char *str2;

	str2 = va_arg(list, char *);

	if (str2 == NULL)
	{
		_printf("(null)");
		return (6);
	}
	for (i = 0; str2[i] != '\0'; i++)
		_putchar(str2[i]);
	return (i);
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

