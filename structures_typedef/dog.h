#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog structure
 * @name: pointer to the dog's name
 * @age: dog's age in float
 * @owner: pointer to the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
