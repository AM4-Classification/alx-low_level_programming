#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
*We return nothing(void)
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
