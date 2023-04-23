#include "main.h"

/**
 * _printf - print a string
 * @format: a formatted string
 *
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

			if (format[i + 1] == '%')
			{
				count += _putchar('%');
				i += 2;
			}
			else
			{
				func_ptr = get_function(format[i + 1]);
				if (func_ptr)
					count += func_ptr(args);
				else
					count = _putchar(format[i]) + _putchar(format[i + 1]);
				i += 2;
			}
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	va_end(args);

	return (count);
}
