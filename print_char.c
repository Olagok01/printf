#include "main.h"

/**
 * print_char - prints character
 * @c: character entered
 * Return: number of characters
 */

int print_char(va_list args)
{
	char c = va_args(args, int);

	return (_putchar(c));
}
