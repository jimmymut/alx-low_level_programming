#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - structure
 *@name: pointer name to char
 *@age: variable age
 *@owner: a pointer owner to char
 *Description: a structure that combines a pointer to char and int data types.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
