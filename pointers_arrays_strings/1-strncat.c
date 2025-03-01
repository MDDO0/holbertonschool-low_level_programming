#include "main.h"

/**
 * _strncat - Concatenates two strings using at most `n` bytes from `src`
 * @dest: The destination string to append to
 * @src: The source string to concatenate
 * @n: Maximum number of bytes to take from `src`
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* Move `i` to the end of `dest` */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Append `n` characters from `src` to `dest` */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Ensure null termination */
	dest[i] = '\0';

	return (dest);
}
