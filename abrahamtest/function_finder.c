#include"main.h"
/**
 * function_finder - finds the function to be printed according
 * to the specifier given
 * @format: the format character
 * Return: function if not NULL
 *
 */


int(*function_finder(const char *format))(va_list)
{
	code_f find_fun[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (find_fun[i].specifier)
	{
		if (find_fun[i].specifier[0] == (*format))
		{
			return (find_fun[i].f);
		}
		i++;
	}
	return (NULL);
}
