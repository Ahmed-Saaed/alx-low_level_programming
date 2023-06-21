#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int print_alphabet(void)
{
	int ch;

	for (ch = 0; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
