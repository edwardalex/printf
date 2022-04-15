#include "main.h"
/**
 * print_c - this function prints a character
 * @args: list of arguments
 * Return: charactes printed
 */
int print_c(va_list args)
{
	print_character(va_arg(args, int));
	return (1);
}
/**
 * print_string - this function prints a string
 * @args: listo of arguments
 * Return: charactes printed
 */
int print_string(va_list args)
{
	unsigned int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
		string = "(null)";

	while (string[i])
	{
		print_character(string[i]);
		i++;
	}
	return (i);
}
/**
 * print_percent - prints char percent
 * @args: list of arguments
 * Return: charactes printed
 */
int print_percent(va_list args)
{
	if (args)
		print_character('%');
	return (1);
}
/**
 * print_integers - prints an integer
 * @args: argument pass by user
 * Return: characters printed
 */
int print_integers(va_list args)
{
	long int integer = va_arg(args, int), numC = 1;

	if (integer < 0)
	{
		print_character('-');
		integer = integer * -1;
		numC += 1;
	}
	if (integer == 0)
	{
		return (print_character('0'));
	}
	if (integer / 1000000000)
		numC += print_character(((integer / 1000000000) % 10) + '0');
	if (integer / 100000000)
		numC += print_character(((integer / 100000000) % 10) + '0');
	if (integer / 10000000)
		numC += print_character(((integer / 10000000) % 10) + '0');
	if (integer / 1000000)
		numC += print_character(((integer / 1000000) % 10) + '0');
	if (integer / 100000)
		numC += print_character(((integer / 100000) % 10) + '0');
	if (integer / 10000)
		numC += print_character(((integer / 10000) % 10) + '0');
	if (integer / 1000)
		numC += print_character(((integer / 1000) % 10) + '0');
	if (integer / 100)
		numC += print_character(((integer / 100) % 10) + '0');
	if (integer / 10)
		numC += print_character(((integer / 10) % 10) + '0');
	print_character(integer % 10 + '0');
	return (numC);
}
/**
 * print_binary - prints the binary of a unsigned int
 * @args: integer pass by user
 * Return: characters printed
 */
int print_binary(va_list args)
{
	unsigned int integer = va_arg(args, unsigned int);
	int i, numC = 0;
	char *binArray;

	binArray = malloc(va_arg(args, unsigned int));
	if (binArray == NULL)
		return ('\0');

	for (i = 0; integer > 0; i++)
	{
		binArray[i] = ((integer % 2) + '0');
		integer = integer / 2;
	}
	numC = i;
	for (; i >= 0; i--)
	{
		print_character(binArray[i]);
	}
	free(binArray);
	return (numC);
}
