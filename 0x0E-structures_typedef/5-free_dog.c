#include "dog.h"
#include "stdlib.h"

/**
 * free_dog - deallocates all memory
 * used by struct of the dog
 *
 * @d: name of the struct
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
