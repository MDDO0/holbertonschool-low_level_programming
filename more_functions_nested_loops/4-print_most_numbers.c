#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9, except 2 and 4
 *
 * Description: Uses `_putchar` to print digits from '0' to '9'
 * but skips '2' and '4'. Ends with a new line.
 */
void print_most_numbers(void)
{
char digit = '0';
while (digit <= '9')
{
if (digit != '2' && digit != '4')
_putchar(digit);
digit++;
}
_putchar('\n');
}
