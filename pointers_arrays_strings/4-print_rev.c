#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: Pointer to the string to be reversed
 *
 * Description: This function first finds the length of the string,
 * then prints the characters in reverse order using _putchar.
 */
void print_rev(char *s)
{
int len = 0;
while (s[len] != '\0')
len++;
while (len > 0)
{
_putchar(s[len - 1]);
len--;
}
_putchar('\n');
}
