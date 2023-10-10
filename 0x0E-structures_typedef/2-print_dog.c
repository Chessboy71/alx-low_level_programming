#include "dog.h"

/**
 * print_dog - initialises a dog object
 * @d : the dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d.name == NULL)
			printf("Name: (nil)") else printf("Name: %c", d.name);
		if (d.age == NULL)
			printf("Age: (nil)");
		else
			printf("Age: %f", d.age);
		if (d.owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %c", d.owner);
	}
}
