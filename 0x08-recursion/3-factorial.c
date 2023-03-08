#include "main.h"
/**
 * factorial - computes the factorial of a given number
 * @n:the number to compute the factorial of
 * Return: The factorial of the number or -1 if n is less than1
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
			return (x);

}
