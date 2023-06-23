#include <stdio.h>
#include "main.h"

/**
 * _sqrt - finds the root
 *
 * @x: parameter
 *
 * Return: the square
*/

double _sqrt(douuble x)
{
	float sqrt, tmp;

	sqrt = x / 2;

	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds the largest num
 *
 * @num: parameter
*/

void largest_prime_factor(long int num)
{
	int pr, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (pr = 3; pr <= _sqrt(num); pr += 2)
	{
		while (num % pr == 0)
		{
			num = num / pr;
			largest = pr;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}
