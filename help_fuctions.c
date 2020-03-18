#include "holberton.h"
/**
* print_n - prints an integer char by char
* @n: The integer to print
*
* Return: void
*/
int print_n(int n)
{
	int aux, i, len, m;

	aux = 0;
	i = 0;
	len = 0;
	m = 0;

	if (n == INT_MIN)
	{
		n = n + 1;
		aux = 1;
	}

	if (n < 0)
	{
		n = -n;
		print_char('-');
		i++;
	}

	if (n / 10 != 0)
		len = (m + print_n(n / 10));
	if (aux == 1)
		print_char('8');
	else
		print_char(n % 10 + '0');
	i++;
	return (i + len);
}
/**
* binary - prints an integer char by char
* @ap: The integer to print
*
* Return: int
*/
int binary(va_list ap)
{
	unsigned int b = va_arg(ap, unsigned int);

	int i = 0, j;
	char p[1000] = {'\0'};

	if (b == 0)
	{
		print_char('0');
		return (1);
	}
	while (b > 0)
	{
		p[i] = b % 2;
		b /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		print_char(p[j] + '0');
		j--;
	}
	return (i);
}
