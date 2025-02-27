#include "main.h"
/**
 * main - Entry point
 *
 * Description: Generates a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
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
