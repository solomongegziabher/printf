#include"main.h"
/**
 * _printf - a function that outputs according to the given specifier
 * @format: is a string to be printed
 * Return: length of the output string
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int (*f)(va_list), count, stringcounter;
	char *space;

	count = stringcounter = 0;
	space = " ";
	 va_start(arg, format);

	if (*format == '\0')
		return (-1);
	while (format[count])
	{
		while (format[count] != '%'  && format[count])
		{
			_putchar(format[count]);
			stringcounter++;
			count++;
		}
		if (format[count] == '\0')
			return (stringcounter);
		count++;
		while (format[count] == *space)
		{
			count++;
		}
		f = function_finder(&format[count]);
		if (f != NULL)
		{
			stringcounter += f(arg);
			count++; 
			continue;
		}
		if (!format[count])
			return (-1);
		_putchar(format[count]);
		stringcounter++;
		if (format[count] == '%')
			count ++;
		else
			count++;
	}
	va_end(arg);
	return (stringcounter);
}
