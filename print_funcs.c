#include "main.h"

/**
 * print_char- prints a character
 *
 * @c: the character
 */

void print_char(char c)
{
	_putchar(c);
}

/**
 * print_string- prints a string
 *
 * @s: the string
 */

void print_string(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
