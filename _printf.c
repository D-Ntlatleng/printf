#include "main.h"
/**
 * _printf - function that print given arguments
 * @format: format string
 *
 * Return: number of bytes printed
 */
int _printf(const char *format, ...)
{
	int i;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
				_putchar(va_arg(ptr, int));
			else if (format[i] == 's')
				_print_str(va_arg(ptr, char *));
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (i);
}
