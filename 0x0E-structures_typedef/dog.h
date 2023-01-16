#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Dog attributes
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner:the owner of the dog.
 *
 * Description: the attribute of a dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
}

typedef struct dog mydog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
mydog *dog1(char *name,float age, char *owner);
void free_dog(mydog *d);
#endif
