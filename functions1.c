#include <stdarg.h>
#include "main.h"

/**
 * print_unsigned - prints an unsigned in in decimal notation
 * @args: list of args
 * Return: number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int a[10];
	unsigned int i, m, n, sum;
	int total;

	n = va_arg(args, unsigned int);
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	for (i = 0, sum = 0, total = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			total++;
		}
	}
	return (total);
}

/**
 * print_octal - takes an unsigned int and prints it in octal notation
 * @args: list of args
 * Return: number of digits printed
 */
int print_octal(va_list args)
{
	unsigned int a[11];
	unsigned int i, m, n, sum;
	int total;

	n = va_arg(args, unsigned int);
	m = 1073741824;
	a[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		a[i] = (n / m) % 8;
	}
	for (i = 0, sum = 0, total = 0; i < 11; i++)
	{
		sum += a[i];
		if (sum || i == 10)
		{
			_putchar('0' + a[i]);
			total++;
		}
	}
	return (total);
}

/**
 * print_hex - prints an unsigned int in hexidecimal form
 * @n: unsigned int to print
 * @c: flag to determine case of printing (0 = lower, 1 = upper)
 * Return: number of digits printed
 */
int print_hex(unsigned int n, unsigned int c)
{
	unsigned int a[8];
	unsigned int i, m, sum;
	char diff;
	int total;

	m = 268435456;
	if (c)
		diff = 'A' - ':';
	else
		diff = 'a' - ':';
	a[0] = n / m;
	for (i = 1; i < 8; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0, total = 0; i < 8; i++)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar('0' + a[i]);
			else
				_putchar('0' + diff + a[i]);
			total++;
		}
	}
	return (total);
}
/**
 * print_lhex - prints number in lowercase hex notation
 * @args: list of args
 * Return: number of digits printed
 */
int print_lhex(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 0));
}

/**
 * print_uhex - prints number in uppercase hex notation
 * @args: list of args
 * Return: number of digits printed
 */
int print_uhex(va_list args)
{
	return (print_hex(va_arg(args, unsigned int), 1));
}
