#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 *
 * @s:string
 *
 * Return: char
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		return (str);
	}
}
