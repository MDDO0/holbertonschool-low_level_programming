#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generate a program that prints the alphabet exept e and q
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a = 'a';
for (; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
{
continue;
}
putchar(a);
}
putchar('\n');
return (0);
}
