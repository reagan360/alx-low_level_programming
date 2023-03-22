#include "main.h"
/**
 *jack_bauer - Prints every minute of the day of
 *Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hou, min;

	for (hou = 0; hou <= 23; hou++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hou / 10) + '0');
			_putchar((hou % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
