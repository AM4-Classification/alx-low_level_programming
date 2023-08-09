#include "main.h"

#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 * Return: A concatenated string of s1 and s2, or NULL on failure.
 */
char * str_concat(char * s1, char * s2) {
  char * concatenated;
  int length_s1, length_s2;

  if (s1 == NULL)
    s1 = "";

  if (s2 == NULL)
    s2 = "";

  length_s1 = length_s2 = 0;

  while (s1[length_s1] != '\0')
    length_s1++;

  while (s2[length_s2] != '\0')
    length_s2++;

  concatenated = malloc(sizeof(char) * (length_s1 + length_s2 + 1));

  if (concatenated == NULL)
    return (NULL);

  length_s1 = length_s2 = 0;

  while (s1[length_s1] != '\0') {
    concatenated[length_s1] = s1[length_s1];
    length_s1++;
  }

  while (s2[length_s2] != '\0') {
    concatenated[length_s1] = s2[length_s2];
    length_s1++, length_s2++;
  }

  concatenated[length_s1] = '\0';

  return (concatenated);
}
