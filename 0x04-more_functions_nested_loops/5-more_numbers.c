#include "main.h"

/**
 * more_numbers - another function
*/

void more_numbers(void)
{
	int num, r, c;

	for (r = 1; r <= 10 ; r++)
	{
		for (c = 0; c <= 14; c++)
		{
			num = c;
			if (c > 9)
			{
				_putchar(1 + 48);
				num = c % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
}
