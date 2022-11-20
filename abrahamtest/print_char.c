#include"main.h"
/**
 * printchar - prints the character from the _printf function argument
 * @c: va_list type
 *
 * Return: 1 as a count single character
 *
 */
int print_char(va_list c)
{
	unsigned char ch;

	ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}
