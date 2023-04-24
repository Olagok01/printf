#include "main.h"

/**
 * print_string - prints a string
 * @args: va_arg
 * Return: Number of char printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int index, count;

	if (str == NULL)
		str = "(null)";
	index = 0;
	count = 0;
	while (str[index] != '\0')
	{
		count += _putchar(str[index]);
		index++;
	}
	return (count);
}
