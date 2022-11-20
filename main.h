#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include<stddef.h>
#include<stdio.h>
/**
 * struct code_format - contains specifier and function pointer
 *
 * @code_f - typedef for struct code_format
 * @specifier: the specifires (s,c,d,i,ui,..)
 * @f: the function that is related to the specifier
 *
 */
typedef struct code_format
{
	char *specifier;
	int (*f)(va_list);
} code_f;


int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list chars);
int (*function_finder(const char *format))(va_list);

#endif
