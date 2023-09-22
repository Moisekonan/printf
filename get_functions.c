#include "main.h"

/**
 * get_func - check for valid specifier
 * @format: a character to check
 * Return: a pointer to the function
 */
int (*get_func(const char *format))(va_list)
{
	int i;
	func_spec p[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{"d", print_dec},
		{"i", print_dec},
		{"b", convert_binary},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_lhex},
		{"X", print_uhex},
		{"S", print_S},
		{"p", print_pointer},
		{"r", print_rev},
		{"R", print_rot},
		{NULL, NULL}
	};

	for (i = 0; p[i].s; i++)
	{
		if (*format == *(p[i].s))
		{
			return (p[i].func_ptr);
		}
	}
	return (NULL);
}
