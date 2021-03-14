#include "holberton.h"

int print_c(va_list list)
{
	char *c = va_arg(list, char *);
	write(1, &c, 1);
	va_end(list);
	return (1);
}

int print_s(va_list list)
{
	char *str = va_arg(list, char *);
	int len = strlen(str);
	write(1, str, len);
	va_end(list);
	return (len);
}

int print_mod(va_list list)
{
	char c = '%';
	write(1, &c, 1);
	va_end(list);
	return (1);
}
int print_i(va_list list)
{
	int i;
	write(1, &i, 1);
	va_end(list);
	return (1);
}
int print_d(va_list list)
{
	int i;
	write(1, &i, 1);
	va_end(list);
	return (1);
}