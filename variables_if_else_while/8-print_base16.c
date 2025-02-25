#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generate a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 48;
int b = 97;
for (; a <= 57; a++)
{
putchar(a);
}
for (; b <= 102; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}

