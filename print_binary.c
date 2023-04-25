#include "main.h"

/**
 * print_binary - changes number from base 10 to base 2
 * @args: arguments
 * Return: binary numbers
 */

int print_binary(va_list args)
{
	unsigned int num;
	char binary[32];
	int i = 0, j;
	int count = 0;

	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		count += _putchar('0');
	}
	while (num > 0)
	{
		binary[i] = num % 2 + '0';
		num /= 2;
		i++;
	}
	for (j = i - 1; j >= 0; --j)
	{
		count += _putchar(binary[j]);
	}
	return (count);
}
