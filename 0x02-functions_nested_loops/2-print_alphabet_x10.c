#include "main.h"

/**
 * print_alphabet_x10 -Prints the lowercase alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
	{
		_putchar('a' + j);
	}
		if (i != 9)
			_putchar('\n');
	}
}
