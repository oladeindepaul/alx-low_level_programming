#include <stdio.h>

/**
 * main - Entry points
 *
 * Return: Always 0 (sucess)
 */
 int main(void)
 {
	 char letter;

	 for (letter = 'z'; letter >='a'; letter--)
		 putchar(letter);

	 putchar('\n');

	 return (0);
 }
