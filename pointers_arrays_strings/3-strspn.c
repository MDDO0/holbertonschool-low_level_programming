#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The main string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Number of bytes in the initial segment of `s`
 * which consist only of bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (!found)
			break;
	}

	return (count);
}
