#include "main.h"

/**
 * rev_string - prints reverse string
 *
 * @s: string paramete input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (l = 0; l < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}