#include "holberton.h"
/**
 * _print_char - Prints character
 * @ap: arguments
 * Return: return the amount of characters
 */

int _print_char(va_list ap)
{
	print_char(va_arg(ap, int));
	return (1);
}

/**
 * print_string - Print string
 * @ap: arguments
 * Return: return the amount of characters
 */

int print_string(va_list ap)
{
	int x;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	for (x = 0; str[x] != '\0'; x++)
		print_char(str[x]);
	return (x);
}

/**
 * print_percent - Print percent symbol
 * @ap: argumnt
 * Return: percent characters
 */

int print_percent(__attribute__((unused))va_list ap)
{
	print_char('%');
	return (1);
}
/**
 * print_decimal - Print percent symbol
 * @ap: argumnt
 * Return: decimal characters
 */
int print_decimal(va_list ap)
{
	print_char(va_arg(ap, unsigned int));
	return (1);
}
/**
 * print_int - Print percent symbol
 * @ap: argumnt
 * Return: int characters
 */
int print_integer(va_list ap)
{
	print_char(va_arg(ap, int));
	return (1);
}
