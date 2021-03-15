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
 * printnum - Helper function for counting
 * @n: number that gets added recursively
 * Return: void
 */

int printnum(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int dig;
	unsigned int i;
	unsigned int long_num;

	long_num = n;
	if (n < 0)
	{
		count++;
		long_num = long_num * -1;
		_putchar('-');
	}
	if (long_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}
	i = 1;
	while (((long_num / i) > 9))
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = long_num / i;
		dig = num % 10;
		count++;
		_putchar(dig + '0');
		i = (i / 10);
	}
	return (count);
}

/**
 * print_d - prints numbers. Integers and decimals!
 * @list: list
 * Return: a number
 */

int print_d(va_list list)
{
	int output;
	int count;

	output = va_arg(list, int);
	count = printnum(output);
	return (count);
}
