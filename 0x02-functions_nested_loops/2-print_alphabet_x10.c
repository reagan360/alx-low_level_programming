#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		int letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
