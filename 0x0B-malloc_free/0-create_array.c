#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create an array of given size and assign the specified character.
 * @size: The size of the array.
 * @c: The character to assign to each element.
 * 
 * Description: This function creates an array of the specified size and assigns
 * the given character to each element of the array.
 * 
 * Return: A pointer to the created array. Returns NULL if memory allocation fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
    char *char_array;           // Pointer to the allocated character array
    unsigned int index;         // Loop index variable
    
    char_array = malloc(sizeof(char) * size); // Allocate memory for character array
    
    if (size == 0 || char_array == NULL)
        return (NULL);           // Return NULL if size is 0 or memory allocation fails
    
    for (index = 0; index < size; index++)
        char_array[index] = c;   // Assign the specified character to each element
    
    return (char_array);        // Return the pointer to the allocated and initialized array
}
