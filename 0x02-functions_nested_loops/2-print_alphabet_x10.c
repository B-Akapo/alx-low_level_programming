#include "main.h"

/**
* main - entry point
* Description: prints alphabet x10 times
* Return: void
*/
void print_alphabet(void)
{
	char letter;
	int i = 0;

	while (i < 10)

	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
}
