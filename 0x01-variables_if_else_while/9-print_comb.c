#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num = 0;

	while (num <=  0)
	{
		putchar(num + 48);
		
		if (num)
		{
			putchar(',');
			putchar(' ');
		}

		num++;	
	}
	
	putchar('\n');
	
	return (0);
}
