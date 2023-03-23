#include "main.h"
/**
 * more_numbers - print  10 times the numbers, from 0 to 14.
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;
	int num;

	while (i <= 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num);
		}
	_putchar('\n');
	i++;
	}
}

