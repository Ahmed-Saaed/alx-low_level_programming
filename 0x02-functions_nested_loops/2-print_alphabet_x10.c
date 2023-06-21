#include "main.h"

/**
 * print_alphabet_x10 - diplay the alphabet
*/


void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for(ch = 0; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
