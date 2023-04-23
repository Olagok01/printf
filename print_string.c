#include "main.h"

/**
 * print_string - prints a string
 * @ap: va_arg
 *
 * Return: Number of char printed
 */

int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);
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
