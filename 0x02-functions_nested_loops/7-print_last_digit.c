#include "main.h"

/**
* print_last_digit - prints the last digit of the given value
* @n: the given value
* Return: returns 0 if succcessful 1 if otherwise
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = -(last);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		_putchar(last + '0');
		return (last);
	}
	return (0);
}
