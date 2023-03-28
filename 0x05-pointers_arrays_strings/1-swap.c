#include "main.h"
/**
 * swap_int - check the code for Holberton School students.
 * @a: paramters for the function swap_int
 * @b: paramters for the function swap_int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
