#include <stdlib.h>

#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string.
 * @s: The string to evaluate.
 * Return: The number of words.
 */
int count_word(char *s) {
  int flag, char_count, word_count;

  flag = 0;
  word_count = 0;

  for (char_count = 0; s[char_count] != '\0'; char_count++) {
    if (s[char_count] == ' ')
      flag = 0;
    else if (flag == 0) {
      flag = 1;
      word_count++;
    }
  }

  return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 * Return: Pointer to an array of strings (Success) or NULL (Error).
 */
char ** strtow(char *str) {
  char **word_matrix, *tmp;
  int i, k = 0, len = 0, word_count, char_count = 0, start, end;

  while ( *(str + len))
    len++;

  word_count = count_word(str);

  if (word_count == 0)
    return (NULL);

  word_matrix = (char **) malloc(sizeof(char *) *(word_count + 1));

  if (word_matrix == NULL)
    return (NULL);

  for (i = 0; i <= len; i++) {
    if (str[i] == ' ' || str[i] == '\0') {
      if (char_count) {
        end = i;
        tmp = (char *) malloc(sizeof(char) *(char_count + 1));

        if (tmp == NULL)
          return (NULL);

        while (start < end)
          *tmp++ = str[start++];

        *tmp = '\0';
        word_matrix[k] = tmp - char_count;
        k++;
        char_count = 0;
      }
    } else if (char_count++ == 0)
      start = i;
  }

  word_matrix[k] = NULL;

  return (word_matrix);
}
