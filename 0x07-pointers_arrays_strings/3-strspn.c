#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the set of bytes to match
 *
 * Return: the number of bytes in the initial segment
 * of s consisting only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
