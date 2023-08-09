#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of given size and assign the specified character.
 * @size: The size of the array.
 * @c: The character to assign to each element.
 * Description: This function creates an array of the specified size and assigns
 * Return: A pointer to the created array. Returns NULL
 */
char *create_array(unsigned int size, char c)
{
    char *char_array; 
    unsigned int index;
    char_array = malloc(sizeof(char) * size);  
    if (size == 0 || char_array == NULL)
        return (NULL);
    for (index = 0; index < size; index++)
        char_array[index] = c;
    return (char_array);
}
