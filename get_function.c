#include "main.h"

/**
 * get_function - checks the character a sends a function to perform
 * @c: takes in a character
 * Return: pointer to function to perform
 */

int (*get_function(char c))(va_list args)
{
	func_op arr[] = {
		{'c', print_char},
		{'s', print_str},
		{'NULL', NULL}
	};
	int i;

	i = 0;
	while (arr[i].c != 'NULL')
	{
		if (arr[i].c == c)
			return (arr[i].func_ptr);
		i++;
	}

	return (NULL);
}
