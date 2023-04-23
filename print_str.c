#include "main.h"

/**
 * print_str - prints a string
 * @str: string entered
 * Return: number of characters
 */

int print_str(va_list args)
{
	char *str = va_arg(args, char*)
	int i, count = 0;

	if (str == NULL)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
