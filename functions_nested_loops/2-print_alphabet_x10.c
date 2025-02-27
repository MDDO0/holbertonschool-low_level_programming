#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase
 *
 * Description: This function prints times 10 times all lowercase letters
 * from 'a' to 'z' using `_putchar` and adds a new line at the end.
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
int b = 1;
for (; b <= 10; b++)
{
char a = 'a';
for (; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}}
