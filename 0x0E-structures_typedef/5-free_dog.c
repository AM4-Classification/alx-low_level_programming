#include <stdlib.h>
#include "dog.h"

/**
 * free_dog_memory - frees memory allocated for a struct dog
 * @dog: struct dog to free
 */
void free_dog_memory(dog_t *dog)
{
	if (dog)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
	}
}
