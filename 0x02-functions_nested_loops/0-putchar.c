#include "main.h"

/**
 * main - Entry point
 * Description: prints '_putchar'
 * Return: Always 0 (success)
 */

int main(void)
{
	char spell[10] = "_putchar";
	int i = 0;

	while (spell[i] != '\0')
	{
		char c = spell[i];

		_putchar(c);
		i++;
	}
	_putchar(10);
	return (0);

}
