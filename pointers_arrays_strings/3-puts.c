#include "main.h"
/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string to print
 *
 * Description: This function prints a string character by character
 * using _putchar and then prints a new line at the end.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
