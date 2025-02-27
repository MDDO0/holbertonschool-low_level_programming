#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 * Description: This function prints all lowercase letters
 * from 'a' to 'z' using `_putchar` and adds a new line at the end.
 *
 * Return: void (no return value)
 */
void print_alphabet(void)
{
char a = 'a';
for (; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
