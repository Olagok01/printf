#include "main.h"

/**
 * _printf - print a string
 * @format: a formatted string
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;
	int (*func_ptr)(va_list);

	va_start(args, format);

	i = 0;
	if (format == NULL)
		return (-1);
	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
				count += _putchar('%');
			else
			{
				func_ptr = get_function(format[i]);
				if (func_ptr == NULL)
					count += _putchar('%') + _putchar(format[i]);
				else
					count += func_ptr(args);
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}
