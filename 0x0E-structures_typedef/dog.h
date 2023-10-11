#ifndef FILE_H
#define FILE_H

/**
 * struct dog - a struct that represents a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: This struct represents a dog and information about its name
 * age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
