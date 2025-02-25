#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generate a program that prints all single digit
 * numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int a = 0; a <= 9; a++)
{
printf("%d", a);
}
putchar('\n');
return (0);
}
