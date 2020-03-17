#include "holberton.h"
/**
 * binary - Prints character
 * @ap: arguments
 * Return: return int of characters
 */
int binary(va_list ap)
{
	unsigned int number;
	int i, j, contador = 1;
	char *s;

	number = va_arg(ap, unsigned int);
	s = malloc(sizeof(int) * 1000);
	for (i = 0; number > 0; i++)
	{
		s[i] = number % 2;
		number = number / 2;
		contador++;
	}
	for (j = i - 1; j >= 0; j--)
		print_char('0' + s[j]);
	free(s);
	return (+1);
}
