#include "main.h"
/**
 * get_function - this function provides the
 * correct function for printing
 * @format: char to compare
 * Return: correct funtion
 */
int (*get_function(const char *format))(va_list args)
{
	int i = 0;

	ob_fun obtain[] = {
		{"c", print_c},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integers},
		{"i", print_integers},
		{"b", print_binary},
		{NULL, NULL}
	};

	while (obtain[i].var != NULL)
	{
		if (*format == *(obtain[i].var))
			break;
		i++;
	}
	return (obtain[i].f);
}
