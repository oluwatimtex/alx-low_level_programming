#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describing characters of a dog
 * @name: describes the name of the dog
 * @age: describes the age of the dog
 * @owner: describes the owner of thedog
 *
 * Description: describing a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
