#include "main.h"

/**
 * find_sqrt - finds the square root of a number
 * @n: the number
 * @i: the iterator
 *
 * Return: the square root, or -1 if not found
 */
int find_sqrt(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (find_sqrt(n, 0));
}
