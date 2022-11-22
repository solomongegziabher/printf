<<<<<<< HEAD
#include "main.h"

/**
 * print_octal - Prints an unsigned number in octal notation
 * @types: Lista of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{

	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 8) + '0';
		num /= 8;
	}

	if (flags & F_HASH && init_num != 0)
		buffer[i--] = '0';

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precision, size));
=======
#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_octal - convert positive int to octal numbers
 *
 * @o: the number to be printed to octal
 * Return: the length of the binary number.
 *
 */
int print_octal(va_list o)
{
	int j, k, l, count;
	int integer[100];
	unsigned int num;

	num = va_arg(o, unsigned int);
	k = count = 0;
	if (num)
	{
		while (num != 0)
		{
			j = num % 8;
			num = num / 8;
			integer[k] = j;
			k++;
		}
		for (l = k - 1; l >= 0; l--)
		{
			_putchar(integer[l] + '0');
			count++;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
>>>>>>> 7999074a30a2292ea53fe12ddec1d676f30fee82
}
