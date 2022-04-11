#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines name, age and owner
 *
 * @name: name of an object
 * @age: age of object
 * @owner: owner of the object
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
#endif
