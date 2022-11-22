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
	int j, k, l, num, count;
	int integer[50];

	num = va_arg(d, int);
	k = count = 0;


	if (num != 0)
	{
		if (num < 0)
		{
			_putchar('-');
			num = -1 * num;
			count++;
		}
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
		return (count);
	}
	else
	{
		_putchar('0');
		return (1);
	}
}
