#include "holberton.h"
/**
 * binary - Prints character
 * @ap: arguments
 * Return: return int of characters
 */
int binary(va_list ap)
{
	unsigned int number;
	int i, j, contador = 0;
	char s[1000];

	number = va_arg(ap, unsigned int);
	if (number == 0)
	{
		print_char(48);
	}
	for (i = 0; number > 0; i++)
	{
		s[i] = number % 2;
		number = number / 2;
		contador++;
	}
	for (j = i - 1; j >= 0; j--)
		print_char('0' + s[j]);
	return (contador + 1);
}
