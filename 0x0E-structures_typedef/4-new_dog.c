#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creats a newtype of dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog (success), NULL (fail)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, lename, lenowner;

	my_dog = malloc(sizeof(*my_dog));
	if (!(my_dog) || !(name) || !(owner))
	{
		free(my_dog);
		return (NULL);
	}

	for (lename = 0; name[lename]; lename++)
		;
	for (lenowner = 0; owner[lenowner]; lenowner++)
		;

	my_dog->name = malloc(lename + 1);
	my_dog->owner = malloc(lenowner + 1);

	if (!(my_dog->name) || !(my_dog->owner))
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; i < lename; i++)
		my_dog->name[i] = name[i];
	my_dog->name[i] = '\0';

	my_dog->age = age;

	for (i = 0; i < lenowner; i++)
		my_dog->owner[i] = owner[i];
	my_dog->owner[i] = '\0';

	return (my_dog);
}
