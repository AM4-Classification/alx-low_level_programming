#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicate a string to a new memory space location.
 * @str: The string to duplicate.
 * Return: A pointer to the duplicated string. Returns NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicated_string;
    	int i, length = 0;
    	if (str == NULL)
	    	return (NULL);
    	i = 0;
    	while (str[i] != '\0')
	    	i++;
    	duplicated_string = malloc(sizeof(char) * (i + 1));
    	if (duplicated_string == NULL)
	    	return (NULL);
    	for (length = 0; str[length]; length++)
	    	duplicated_string[length] = str[length];
    	return (duplicated_string);
}

