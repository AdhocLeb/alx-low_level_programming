#include <stdio.h>

/**
 * main - Print single digit numbers in base 10 using putchar() function
 *
 * This program prints digits 0 through 9, followed by a newline,
 * using only the putchar() function and no char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');

return (0);
}
