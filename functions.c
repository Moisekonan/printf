#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *print_char - prints character
 *@args: argument
 *
 *Return: character
 */

int print_char(va_list args)
{

	_putchar(va_arg(args, int));
	return (1);
}


/**
 *print_str - prints string
 *@args: arguments
 *Return: string
 */

int print_str(va_list args)
{

	int j;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j]; j++)
	{
		_putchar(str[j]);
	}
	return (j);
}

/**
 *print_pct - prints character "%"
 *@args : arguments
 *
 *Return: character "%"
 */
int print_pct(va_list args)
{
	(void)args;
	return (write(1, "%", 1));
}

/**
 * print_nothing - print unknow format
 * @format: the format
 * @i: an index for loop
 * Return: 1
 */
int print_nothing(const char *format, int i)
{
	_putchar(format[i - 1]);
	_putchar(format[i]);
	return (1);
}

/**
 * convert_binary - convert binary to decimal
 * @args: the list of args
 * Return: the number of digit printed
 */
int convert_binary(va_list args)
{
	int i, j;
	int total = 0;
	unsigned int n;
	unsigned int arr[33];

	n = va_arg(args, unsigned int);
	if (n < 2)
		total += _putchar(n + '0');
	else
	{
		for (j = 0; n > 0; j++)
		{
			arr[j] = n % 2;
			n = n / 2;
		}
		for (i = j - 1; i >= 0; i--)
			total += _putchar(arr[i] + '0');
	}
	return (total);
}
