#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

/**
 * struct dog - struct for dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Description: struct for dog defining its name, age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
