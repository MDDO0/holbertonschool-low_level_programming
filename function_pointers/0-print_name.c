#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: the name to print
 * @f: pointer to the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
