#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number -print out numbers
 *
 * @num: the nuber to be printed
 *
 * Description: it will display the number entered
 *
 */
int print_binary(va_list b)
{
	int j, k, l, num, count;
	int integer[50];

    num = va_arg(b, int);
    
    count = 0;
	if (num < 0)
	{
		return (0);
	}
	  while (num != 0)
		{
			j = num % 2;
			num = num / 2;
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
