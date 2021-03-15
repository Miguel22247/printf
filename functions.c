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
int len = strlen(str);
write(1, str, len);
va_end(list);
return (len);
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
 * rec_pd - Helper function for counting
 * @num: number that gets added recursively
 * @cont: char for counting
 * Return: void
 */

void rec_pd(int num, int *cont)
{
	if (num != 0)
	{
		rec_pd(num / 10, cont);
		_putchar(num % 10 + '0');
		*cont += 1;
	}
}

/**
 * print_d - prints numbers. Integers and decimals!
 * @list: list
 * Return: a number
 */

int print_d(va_list list)
{
	int in = va_arg(list, int);
	int count = 0;

	rec_pd(in, &count);
	va_end(list);
	return (count);
}
