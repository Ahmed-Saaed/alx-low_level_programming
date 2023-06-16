#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program to display the alphabet in lower case
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char c = "a";

	while (c <= "z")
	{
		putchar(c);
		c++;
	}

	putchar("\n");
	return (0);
}
