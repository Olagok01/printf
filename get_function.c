#include "main.h"

/**
 * check_function - checks for the character a sends
 *	a function to perform
 * @x: takes in a character
 * Return: pointer to function to perform
 */

int (*get_function(char x))(va_list args)
{
	func_op opr[] = {
		{'c', print_char},
		{'s', print_string},
		{'x', NULL}
	};
	int index;

	index = 0;
	while (opr[index].c != 'x')
	{
		if (opr[index].c == c)
			return (opr[index].func_ptr);
		index++;
	}

	return (NULL);
}
