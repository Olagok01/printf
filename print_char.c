#include "main.h"

/**
 * print_char - prints character
 * @args: va_arg
 * Return: number of character
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
