#include "main.h"

/**
 * _printf - replicate the printf function
 * @format: the formatted string
 * @...: A variable number of numbers to be printed.
 * Return: Number of printed character
 */

int _printf(const char *format, ...)
{
	int count = 0, i;
	va_list args;
	int (*func_ptr)(va_list);

	va_start(args, format);
	i = 0;

	if (format == NULL)
	{
		return (-1)

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			else if (format[i] == '%')
				count += _putchar('%');
			else
			{
				func_ptr = get_function(format[i]);
				count += func_ptr(args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
