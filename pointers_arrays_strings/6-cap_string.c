#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Capitalize first letter of the string if it's lowercase */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');

		/* Check if previous character is a separator */
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= ('a' - 'A');
				break;
			}
		}
	}
	return (str);
}
