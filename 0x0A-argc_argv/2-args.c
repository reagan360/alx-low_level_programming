#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: arguments for number
 * @argv: arguments for array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
