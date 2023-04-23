#include "main.h"

/**
 * print_char - prints a character
 * @args: va_arg
 *
 * Return: int
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
