#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: size of the array
 * @c: the char to initialize the array with
 *
 * Return: Pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
