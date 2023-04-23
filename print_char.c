#include "main.h"

/**
 * print_char - prints a character
 * @ap: va_arg
 *
 * Return: int
 */

int print_char(va_list ap)
{
	char c = va_arg(ap, int);

	return (_putchar(c));
}
