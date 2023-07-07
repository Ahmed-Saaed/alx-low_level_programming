#include <unistd.h>
#include "main.h"

/**
 * _putchar - write c to the output
 * @c: the character to display, a parameter
 *
 * Return: On Success 1.
 *	   on error -1 is returned.
*/

int _putchar(char c)
{

	return (write(1, &c, 1));
}
