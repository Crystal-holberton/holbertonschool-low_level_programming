#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns length of string
 * @s: string being measured
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies string to store
 * @dest: destination to store string copy
 * @src: source string to be copied
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1 = _strlen(name);
	int l2 = _strlen(owner);

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(sizeof(char) * (l1 + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (l2 + 1));

	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
