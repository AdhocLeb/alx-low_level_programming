#include "main.h"
/**
 * main - Prints out lowercase alphabets
 * Return: 0 Always
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
return (0);
}
