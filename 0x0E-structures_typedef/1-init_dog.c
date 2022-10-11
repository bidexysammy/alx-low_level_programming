#include "dog.h"
/**
 * init_dog - ...
 * @d: is a pointer
 * @name: ...
 * @age: ...
 * @owner: ...
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog s;

	d = &s;
	s.name = "Taiwo";
	s.age = 23.00;
	s.owner = "Samson";
}


