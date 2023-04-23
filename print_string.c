#include "main.h"

/**
 * print_string - prints a string
 * @args: va_arg
 * Return: Number of char printed
 */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i, count;

	if (str == NULL)
		str = "(null)";
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
