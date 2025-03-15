#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	if (!name || !owner)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	dog->name = malloc(name_len + 1);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(owner_len + 1);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
