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
char a = 'a';
	for (; a <= 'z' ; a++)
{
putchar(a);
putchar('\n');
}   
return (0);
}
