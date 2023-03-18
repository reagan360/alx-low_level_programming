#include <stdio.h>
/**
 * main - main function entry
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		(i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
