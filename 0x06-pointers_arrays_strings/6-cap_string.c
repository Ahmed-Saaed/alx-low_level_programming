#include "main.h"
#include <stdio.h>

/**
 * isLower - ascci compare
 *
 * @c: parameter
 *
 *  Return: 1, 0
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - ascci delimiter
 *
 * @c: char
 *
 * Return: 1, 0
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
		return (0);
	}
}

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int l = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			l = 1;
		else if (isLower(*s) && l)
		{
			*S -= 32;
			l = 0;
		}
		else
			l = 0;
		s++;
	}
	return (ptr);

}
