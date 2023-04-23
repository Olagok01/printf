#ifndef MAIN_H
#define MAIN_H


/**
 * struct func - group of functions to perform
 * @c: the value to look out for
 * @func_ptr: the function to point to
 *
 * Description: should scan through the list and choose the
 * right function for operation
 */

#include <stddef.h>
#include <stdarg.h>

typedef struct funct
{
	char c;
	int (*func_ptr)(va_list);
} func_op;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list);
int print_str(va_list);
int (*get_function(char))(va_list);


#endif
