#include "main.h"

/**
 * print_diagonal - another functionl
 *
 * @n: is a parameter
*/

void print_diagonal(int n)
{
	int pa, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (pa = 1; pa <= n; pa++)
		{
			for (space = 1; space <= pa; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
