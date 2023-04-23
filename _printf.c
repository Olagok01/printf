#include "main.h"
#include <stddef.h>
#include <stdarg.h>


/**
 * _printf - replicate printf
 * @format - a formatted string
 * @...: A variable number of numbers to be printed.
 * Return: Number of printed character
 */

int _printf(const char *format, ...)
{
	int count = 0, i, index;
	char *str;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i] == '%')
				count += _putchar('%');
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					return ("null");
				count += print_str(str);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	_putchar('\n');
	va_end(args);
	return (count);
}
