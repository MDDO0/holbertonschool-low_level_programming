#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 with FizzBuzz logic.
 *
 * Description: For multiples of 3, prints "Fizz".
 *              For multiples of 5, prints "Buzz".
 *              For multiples of both 3 and 5, prints "FizzBuzz".
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
