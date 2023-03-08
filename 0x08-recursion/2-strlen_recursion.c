#include "main.h"
/**
 * _strlen_recursion - Returns the length of string
 * @s:pointer to the string to be measured
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
