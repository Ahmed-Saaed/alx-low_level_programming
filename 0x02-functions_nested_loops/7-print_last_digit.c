#include "main.h"

/**
 * print_last_digit - is a function
 * @n: it is parameter
 * Return: last character
*/


int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');

	return (last);
}
