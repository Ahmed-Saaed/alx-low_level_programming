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
	int nums;

	for (nums = 0 ; nums <= 9 ; nums++)
		putchar(nums + '0');
	putchar('\n');
	return (0);
}
