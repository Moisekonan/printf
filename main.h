#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct func_spec - a structure for format specifier associated by a function
 * @s: the string specifier
 * @func_ptr: a pointer to func associated by s
 */
typedef struct func_spec
{
	char *s;
	int (*func_ptr)(va_list);
} func_spec;


/*_printf.c*/
int _printf(const char *format, ...);

/*_putchar.c*/
int _putchar(char c);

/*print_dec.c*/
int print_dec(va_list args);

/*get_functions.c*/
int (*get_func(const char *format))(va_list);

/*rot13.c*/
int rot13(char *s);

/*functions.c*/
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
int print_nothing(const char *format, int i);
int convert_binary(va_list args);

/*functions1.c*/
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(unsigned int n, unsigned int c);
int print_lhex(va_list args);
int print_uhex(va_list args);

/*functions2.c*/
int print_S(va_list args);
int hex_print(char c);
int print_pointer(va_list args);
int print_rev(va_list args);
int print_rot(va_list args);

#endif
