#include "main.h"

/**
 *
 * times_table - nice function 
 *
*/

void times_table(void)
{
	int num, mul, prod;

	for (num = 0; num <= 9; num ++)
	{
		for (mul = 0; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mul;
			
			if (prof <= 9 )
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);
			_putchar((prod % 10) + 48);
		}

		_putchar('\n');
	}	
}