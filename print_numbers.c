#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print out numbers it will display the number entered
 * @d: the number to be printed
 * Return: the length of the number
 */
int print_numbers(va_list d)
{
	int i, j, k, l, num, count;
	int integer[50];

	num = va_arg(d, int);
	count = 0;

	if (num < 0)
	{	_putchar('-');
		num = -1 * num;
		count++;
	}
	if (num >= 0  && num < 100)
	{
		i = num / 10;
		j = num % 10;
		if (num > 9)
		{
			_putchar(i + '0');
			count++;
		}
		_putchar(j + '0');
		count++;
	}
	else if (num >= 100)
	{
		while (num != 0)
		{
			j = num % 10;
			num = num / 10;
			integer[k] = j;
			k++;
		}
		for (l = k - 1; l >= 0; l--)
		{
			_putchar(integer[l] + '0');
			count++;
		}
	}
	return (count);
}
