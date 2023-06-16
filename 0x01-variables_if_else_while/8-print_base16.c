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
	int limit = 48;

	for (;limit < 103;)
	{
		putchar(limit);
		if (limit == 57)
			limit += 39;
		limit++;
	}
	putchar('\n');
	return (0);
}
