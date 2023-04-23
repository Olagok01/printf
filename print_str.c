#include "main.h"

/**
 * print_str - prints a string
 * @args: va_arg
 * Return: number of characters printed
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char *)
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
