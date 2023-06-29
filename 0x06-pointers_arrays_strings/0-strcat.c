#include "main.h"

/**
 * _strcat - to connect to strings
 * @dest:input
 * @src:input
 * Return:output
*/

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (c);
}
