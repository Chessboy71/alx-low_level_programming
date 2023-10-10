#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a type of dog
 * @name : the name of the dog
 * @age : the age of the dog
 * @owner : name of the owner
 *
 * Description : the object of a cute doggo
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
