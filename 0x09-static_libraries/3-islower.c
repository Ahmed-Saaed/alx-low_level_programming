#include "main.h"

/**
 *  _islower  - to display numbers
 *
 * @c: is a parameter
 *
 * Return: returns  1 if `c` is lower case
 *		otherwise return 0
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
