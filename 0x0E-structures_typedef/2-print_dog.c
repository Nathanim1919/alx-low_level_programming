#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: a dog structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", d->name);
		printf("Age: %d", d->age);
		printf("Owner: %s", d->owner);
	}
