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
	char x;
	int (*func_ptr)(va_list);
} func_op;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int (*get_function(char x))(va_list args);

#endif /* MAIN_H */
