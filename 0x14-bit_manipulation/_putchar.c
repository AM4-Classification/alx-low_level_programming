#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: The character we want to print
 *
 * Return: On success return 1 
 * Else, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
