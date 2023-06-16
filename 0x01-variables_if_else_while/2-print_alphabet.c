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
	char ct = "a";

	while (ct <= "z")
	{
		putchar(ct);
		ct++;
	}

	putchar("\n");
	return (0);
}
