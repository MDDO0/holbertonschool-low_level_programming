#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 *
 * Description: This function swaps elements from the start and end
 * of the array moving towards the center, effectively reversing the array.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
