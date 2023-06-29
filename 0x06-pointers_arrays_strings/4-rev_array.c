#include "main.h"

/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
*/

void reverse_array(int *a, int n)
{
	int i, j, c;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
