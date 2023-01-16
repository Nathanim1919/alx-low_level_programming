#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: a dog structure
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s", d->name);
	printf("Age: %f", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s", d->owner);
}
