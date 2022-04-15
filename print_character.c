#include "main.h"
/**
 * print_character - prints a character
 * @c: character to print
 * Return: number of characters printed
 */
int print_character(char c)
{
	return (write(1, &c, 1));
}
