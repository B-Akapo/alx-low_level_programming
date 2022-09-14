#include "main.h"

/**
 * main - Entry point
 * Description: prints '_putchar'
 * Return: Always 0 (success)
*/

int main()
{
	char spell[10] = "_putchar\n";
	int i;

	while (spell[i] != '\0')
	{
		char c = spell[i];
		_putchar(c);
		i++;
	}
	return 0;

}
