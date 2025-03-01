#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using '#' characters.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* طباعة المسافات */
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		/* طباعة الـ # */
		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
