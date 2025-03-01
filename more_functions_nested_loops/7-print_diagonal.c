#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Number of times the character '\' should be printed
 *
 * Description: If `n` is greater than 0, print '\' `n` times,
 * each on a new line, with increasing spaces before each.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}}
else
_putchar('\n');
}
