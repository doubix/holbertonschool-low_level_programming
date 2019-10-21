#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 *
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newdog = malloc(sizeof(dog_t));
int age_size, name_size, owner_size;

for (name_size = 0; name[name_size]; name_size++)
;
for (owner_size = 0; owner[owner_size]; owner_size++)
;
if (newdog == NULL)
return (NULL);
newdog->name = malloc(sizeof(char) * (name_size + 1));
if (newdog->name == NULL)
{
free(newdog);
return (NULL);
}
newdog->owner = malloc(sizeof(char) * (owner_size + 1));
if (newdog->owner == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
for (age_size = 0; age_size <= name_size; age_size++)
newdog->name[age_size] = name[age_size];
newdog->age = age;
for (age_size = 0; age_size <= owner_size; age_size++)
newdog->owner[age_size] = owner[age_size];
return (newdog);
}
