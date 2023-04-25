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

/**
 * print_int- prints an integer
 *
 * @a: integer to be printed
 *
 * Return: number of charaters printed
 */

int print_int(int a)
{
	unsigned int num = a;
	int count = 0;

	if (a < 0)
	{
		_putchar('-');
		num = -a;
		count++;
	}

	if (num / 10)
		count += print_int(num / 10);

	_putchar(48 + num % 10);
	count++;

	return (count);
}

/**
 * print_percent- prints percent
 *
 * Return: number of printed characters
 */

int print_percent(void)
{
	_putchar('%');
	return (1);
}
