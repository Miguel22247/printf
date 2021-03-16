#ifndef HOLBERTON_H
#define HOLBERTON_H

/* libraries to use */
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/**
 * struct pr - struct for operations
 * @op: operation
 * @f: to be listed
 *
 * Description: Checks if there's an operation
 */
typedef struct pr
{
	char *op;
	int (*f)(va_list);
} pr_f;

/* Prototypes */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int print_i(va_list list);
int print_d(va_list list);
int print_r(va_list list);
int print_mod(va_list list);
int print_d(va_list list);
int _strlen(char *s);
int _funcion(const char *format, pr_f ops[], va_list ap);
#endif
