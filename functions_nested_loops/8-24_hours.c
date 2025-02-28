#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Description: Uses nested loops to iterate through hours and minutes,
 * printing them in the format HH:MM.
 *
 * Return: void (no return value)
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
