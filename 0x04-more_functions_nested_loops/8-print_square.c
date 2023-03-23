#include "main.h"
/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 * Return: 0
 */
void print_square(int size)
{
	int num = 0;
	int num2 = 0;

	if (size > 0)
	{
		while (num < size)
		{
			while (num2 < size)
			{
				_putchar('#');
				num2++;
			}
		num2  = 0;
		num++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
