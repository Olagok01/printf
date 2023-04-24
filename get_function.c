#include "main.h"

/**
 * get_function - checks the character a
 *	sends a function to perform
 * @c: takes a character
 * Return: pointer to function to perform
 */

int (*get_function(char c))(va_list args)
{
	int i = 0;
	func_opt opr[] = {
		{"c", print_char},
		{"s", print_string},
		{"\0", NULL}
	};
	while (opr[i].valid)
	{
		if (opr[i].valid == c)
			return (opr[i].func_ptr);
		i++;
	}
	return (NULL);
}
