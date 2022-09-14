#include "main.h"

/**
* _islower - checks for lowercase character and prints
* @c: is the value it receives
* Return: 1 if true 0 if false
*/

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
