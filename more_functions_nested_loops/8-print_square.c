#include "main.h"
/**
 * print_square - Prints a square of size `size`
 * @size: The size of the square (height & width)
 *
 * Description: Prints a square using the character `#`
 * followed by a new line.
 */
void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar('#');
_putchar('\n');
}}
else
_putchar('\n');
}
