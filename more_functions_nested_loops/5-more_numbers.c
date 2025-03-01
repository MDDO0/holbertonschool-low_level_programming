#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Description: Uses `_putchar` to print numbers from '0' to '14'
 * ten times, ensuring only 3 `_putchar` calls are used.
 */
void more_numbers(void)
{
int i, num;
for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');
_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
