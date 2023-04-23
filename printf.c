#include "main.h"
#include <stddef.h>
#include <stdarg.h>


/**
 * _printf - replicate printf
 * @format - a formatted string
 * Return: Number of printed character
 */

int _printf(const char *format, ...)
{
        char c;
        int written = 0, i, index;
        char *str;
        va_list args;

        if (format == NULL)
        {
                return (-1);
        }

        va_start(args, format);

        i = 0;
        while(format != NULL && format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        i++;
                        if (format[i] == 'c')
                        {
                                c = va_arg(args, int);
                                _putchar(c);
                                written++;
                        }
                        else if (format[i] == '%')
                        {
                                c = '%';
                                _putchar(c);
                                written++;
                        }
                        else if (format[i] == 's')
                        {
                                str = va_arg(args, char *);

                                for (index = 0; str[index] != '\0'; index++)
                                {
                                        _putchar(str[index]);
                                        written++;
                                }
                        }
                }
                i++;
	}
	_putchar('\n');
        va_end(args);

        return (written);

}
