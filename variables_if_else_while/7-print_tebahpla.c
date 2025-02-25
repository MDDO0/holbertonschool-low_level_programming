#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generates program that prints the alphabet in lowercase
 * , followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char z = 'z';
for (; z >= 'a' ; z--)
{
putchar(z);
}
putchar('\n');
return (0);
}
