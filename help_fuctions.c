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
