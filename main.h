#ifndef _MAIN_H_
#define _MAIN_H_
/*LIBRARIES*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/*STRUCTURES*/
/**
 * struct functions - struct made to obtain the correct
 * funtion
 * @var: variable given in _printf function
 * @f: function to call after comparition
 */
typedef struct functions
{
	char *var;
	int (*f)(va_list);
} ob_fun;
/*PROTOTYPES*/

int _putchar(char ch);
int _puts(char *string);
int printc(char *format, va_list);
int printstr(char *format, va_list);
int (*driver(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printint(char *format, va_list pa);
int integer(int number);
int contadordigit(int number);
int _abs(int number);
int printpercent(char *format, va_list pa);
int printhex(char *format, va_list);
int printHEX(char *format, va_list);
int printocta(char *format, va_list);
int print_unsign(char *format, va_list);
#endif
