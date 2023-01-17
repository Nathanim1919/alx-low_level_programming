#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
*new_dog - creates a new dog
*@name: name of the dog
*@age: age of the dog
*@owner:owner of the dog
*Return: new dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int a, b, i, j;

	a = 0, b = 0;
	newDog = malloc(sizeof(struct dog));

	if (newDog == NULL)
		return (NULL);
	while (name[a++])
		;
	while (owner[b++])
		;
	newDog->name = malloc(sizeof(newDog->name) * a);

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < a; i++)
		newDog->name[i] = name[i];
	newDog->age = age;

	newDog->owner = malloc(sizeof(newDog->owner) * b);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (j = 0; j < b; j++)
		newDog->owner[j] = owner[j];
	return (newDog);
}
