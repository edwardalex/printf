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
int print_binary(va_list args);
int print_character(char c);
int _printf(const char *format, ...);
int print_string(va_list args);
int print_c(va_list args);
int print_percent(va_list args);
int print_integers(va_list args);
int (*get_function(const char *format))(va_list);
#endif
