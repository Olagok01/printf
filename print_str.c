#include "main.h"

/**
 * print_s - prints a string
 * @args: argument
 * Return: number of characters
 */

int print_s(va_list args)
{
	int i, count = 0;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
