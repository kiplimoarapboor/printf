#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct func- struct of functions
 *
 * @spec: the specifier
 * @f: function to execute
 */
typedef struct func
{
	char spec;
	int (*f);
}print;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);

#endif /*MAIN_H*/
