#include "main.h"

/**
 * print_decimal - Prints an integer to char
 * @args: arguments
 * Return: int of numbers in char
 */

int print_decimal(va_list args)
{
	unsigned int absolute, aux, countnum, number;
	int n;

	number = 0;
	n = va_arg(args, int);

	if (n < 0)
	{
		absolute = (n * -1);
		number += _putchar('-');
	}
	else
	{
		absolute = n;
	}
	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		number += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (number);
}

/**
 * print_integer - Prints an integer to char
 * @args: arguments
 * Return: int of numbers in char
 */

int print_integer(va_list args)
{
	return (print_decimal(args));
}
