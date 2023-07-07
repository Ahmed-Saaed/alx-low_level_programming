#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: ALways 0 is success
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; *s++;)
		l++;
	return (l);
}
