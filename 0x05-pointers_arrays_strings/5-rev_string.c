#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char to check
 * Return: 0 is success
 */

void rev_string(char *s)
{
	int a = 0 , b;
	char tmp;

	while (s[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a / 2; b++)
	{
		tmp = s[b];
		s[b] = s[a - 1 - b];
		s[a - 1 - b] = tmp;
	}
}
