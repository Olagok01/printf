#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct func - group of functions to perform
 * @valid: the value to look out for
 * @func_ptr: the function to point to
 * Description: should scan through the list and choose the
 * right function for operation
 */

typedef struct func
{
	char *valid;
	int (*func_ptr)(va_list);
} f_options;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int (*check_function(char x))(va_list args);

#endif
