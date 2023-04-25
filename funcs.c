#include "main.h"

/**
 * print_char- prints a character
 *
 * @c: the character
 *
 * Return: number of printed characters
 */

int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_string- prints a string
 *
 * @s: the string
 *
 * Return: Number of printed characters
 */

int print_string(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}

int print_percent(void)
{
	_putchar('%');
	return (1);
}
