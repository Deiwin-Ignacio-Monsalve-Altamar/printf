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
	int i, j;
	char *str;
	char aux[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char uox[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = va_arg(ap, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] == aux[j])
			{
				print_char('0' + uox[j]);
				break;
			}
			j++;
		}
	}
	return (i);
}

