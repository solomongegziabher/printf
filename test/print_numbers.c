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
        int len, powten, j, digit, n, count = 0, num;

        n = va_arg(d, int);
        if (n != 0)
        {
                if (n < 0)
                {
                        _putchar('-');
                        count++;
                }
                num = n;
                len = 0;
                while (num != 0)
                {
                        num /= 10;
                        len++;
                }
                powten = 1;
                for (j = 1; j <= len - 1; j++)
                        powten *= 10;
                           for (j = 1; j <= len; j++)
                {
                        digit = n / powten;
                        if (n < 0)
                                _putchar((digit * -1) + 48);
                        else
                                _putchar(digit + '0');
                        count++;
                        n -= digit * powten;
                        powten /= 10;
                }
        }
        else
        {
                _putchar('0');
                return (1);
        }
        return (count);
}
