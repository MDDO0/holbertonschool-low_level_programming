#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: A string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if the string contains
 * non-binary characters or is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
		i++;
	}

	return (result);
}
