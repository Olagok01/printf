#include "main.h"

/**
 * print_str - prints a string
 * @str: string entered
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
