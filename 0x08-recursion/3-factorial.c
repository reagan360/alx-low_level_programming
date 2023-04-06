#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
