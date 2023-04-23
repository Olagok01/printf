#include "main.h"

/**
 * print_s - prints a string
 * @args: argument
 * Return: number of characters
 */

int print_str(char *str)
{
	int i, count = 0;

	i = 0;

	while (str[i] != '\0')
	{
		count += _putchar(str[i]);
		i++;
	}
	return (count);
}
