#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first intege
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int a = 972;
	int b = -98;
	int c = 0;

	if (a > b && a > c)
	{
		printf("largest = %d\n", a);
	}
	else if (b > a && b > c)
	{
		printf("largest = %d\n", b);

	}
	else if (c > a && c > b)
	{
		printf("largest = %d\n", c);

	}
	return (0);
}
