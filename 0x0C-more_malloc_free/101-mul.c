#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MESSAGE "Error"

/**
 * is_digit - Checks if a string contains only digit characters.
 * @str: The string to be evaluated.
 *
 * Return: 0 if a non-digit character is found, 1 otherwise.
 */
int is_digit(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}

/**
 * _strlen - Returns the length of a string.
 * @str: The string to evaluate.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

/**
 * handle_errors - Handles errors for the main function.
 */
void handle_errors(void)
{
	printf("%s\n", ERROR_MESSAGE);
	exit(98);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, print_num = 0;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		handle_errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			print_num = 1;
		if (print_num)
			_putchar(result[i] + '0');
	}
	if (!print_num)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
