#include <stdlib.h>
#include "dog.h"

/**
 * string_length - returns the length of a string
 * @string: string to evaluate
 *
 * Return: the length of the string
 */
int string_length(char *string)
{
	int length;

	length = 0;

	while (string[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * string_copy - copies the string pointed to by source
 * including the terminating null byte (\0)
 * to the buffer pointed to by destination
 * @destination: pointer to the buffer in which we copy the string
 * @source: string to be copied
 *
 * Return: the pointer to destination
 */
char *string_copy(char *destination, char *source)
{
	int source_length, i;

	source_length = string_length(source);

	for (i = 0; i < source_length; i++)
	{
		destination[i] = source[i];
	}
	destination[i] = '\0';

	return (destination);
}

/**
 * create_new_dog - creates a new dog
 * @dog_name: name of the dog
 * @dog_age: age of the dog
 * @dog_owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *create_new_dog(char *dog_name, float dog_age, char *dog_owner)
{
	dog_t *new_dog;
	int name_length, owner_length;

	name_length = string_length(dog_name);
	owner_length = string_length(dog_owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (name_length + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	string_copy(new_dog->name, dog_name);
	string_copy(new_dog->owner, dog_owner);
	new_dog->age = dog_age;

	return (new_dog);
}
