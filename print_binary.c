#include "main.h"

/**
 * print_binary - changes number from base 10 to base 2
 * @args: arguments
 * Return: Success(0)
 */

int print_binary(va_list args)
{
	unsigned int num;
	char binary[32];
	int i = 0, j;

	num = va_arg(args, unsigned int);

	while (num > 0)
	{
		binary[i++] = num % 2 + '0';
		num /= 2;
	}
	if (i == 0)
	{
		binary[i++] = '0';
	}
	binary[i] = '\0';
	for (j = i - 1; j >= 0; --j)
	{
		_putchar(binary[j]);
	}
	return (0);
}
