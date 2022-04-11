#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * new_dog - creates a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dogg = malloc(sizeof(dog_t));

	if (dogg == NULL)
		return (NULL);

	dogg->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dogg->name == NULL)
	{
		free(dogg);

		return (NULL);
	}

	dogg->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dogg->owner == NULL)
	{
		free(dogg->name);
		free(dogg);

		return (NULL);
	}

	dogg->name = _strcopy(dogg->name, name);
	dogg->age = age;
	dogg->owner = _strcopy(dogg->owner, owner);

	return (dogg);
}

/**
 * _strlen - finds the length of a string
 *
 * @str: the string to be measure
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, including the
 *            the terminating null byte, to a buffer pointed to by dest.
 *
 * @dest: the buffer storing the string copy
 * @src: the source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
