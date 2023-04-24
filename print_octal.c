#include "main.h"

/**
 * print_octal - prints a value in octal
 * @args: va_arg
 * Return: number of arg printed
 */

int print_octal(va_list args)
{
	int rem = 0, count = 0, index = 0;
	int array[KILO_BYTE];
	int numb = va_arg(args, int);

	while (numb != 0 && index < KILO_BYTE)
	{
		rem = numb % 8;
		numb = numb / 8;
		array[index] = rem;
		index++;
	}

	i--;
	while (index >= 0)
	{
		print_num(array[index], &count);
		index--;
	}

	return (count);
}
