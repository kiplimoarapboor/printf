#include "main.h"

/**
 * _printf- imitates printf function
 *
 * @format: data format
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				count += print_char(va_arg(args, int));
			else if (*format == 's')
				count += print_string(va_arg(args, char *));
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
