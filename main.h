#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct func - group of functions to perform
 * @c: the value to look out for
 * @func_ptr: the function to point to
 *
 * Description: should scan through the list and choose the
 * right function for operation
 */

typedef struct func
{
	char c;
	int (*func_ptr)(va_list);
} f_options;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_string(va_list);
int (*check_function(char))(va_list);

#endif /* MAIN_H *
