#include "holberton.h"
#include <stdio.h>
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
/**
 * rot13 - print character
 * @ap: pointr character
 * Return: int
 */
int rot13(va_list ap)
{
	int i, x;
	char *str;
	char aux[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char uox[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	str = va_arg(ap, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				print_char(u[x]);
				break;
			}
		}
		if (x == 53)
			print_char(str[i]);
	}
	return (i);
}

