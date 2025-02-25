#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generates a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char A = 'A';
char a = 'a';
for (; a <= 'z'; a++)
{
putchar(a);
}
for (; A <= 'Z'; A++)
{
putchar(A);
}
putchar('\n');
return (0);
}
