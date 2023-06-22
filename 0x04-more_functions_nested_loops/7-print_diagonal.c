#include "main.h"

/**
 * print_diagonal - another functionl
 *
 * @n: is a parameter
*/

void print_diagonal(int n)
{
	int p, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (space = 1; space <= p; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
