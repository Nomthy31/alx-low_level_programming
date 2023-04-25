#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char letter;

	while (x <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
			_putchar('\n');
			x++;
	}

}

