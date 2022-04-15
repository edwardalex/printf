#include "main.h"
/**
 * _printf - this function produces output accordinng to format
 * @format: format of the output
 * Return: number of characters printed (without NULL)
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, numC = 0;
	va_list ap;
	int (*get)(va_list);

	va_start(ap, format);

	if (!format || !*format)
		return (-1);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (numC);
			get = get_function(&format[i]);
			if (format[i] == 'c' || format[i] == 's'
			|| format[i] == '%' || format[i] == 'd'
			|| format[i] == 'i' || format [i] == 'b')
				numC += get(ap);
			else
			{
				print_character(format[i - 1]);
				numC += 1;
				print_character(format[i]);
				numC += 1;
			}
		}
		else
		{
			print_character(format[i]);
			numC += 1;
		}
		i++;
	}
	return (numC);
}
