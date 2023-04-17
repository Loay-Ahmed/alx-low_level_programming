#include "dog.h"
#include "stdio.h"

/**
 * print_dog - prints the name, age and owner
 * of the struct dog
 *
 * @d: name of the struct
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
