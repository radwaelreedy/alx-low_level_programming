#include "main.h"

/**
 * _strpbrk - search a string for any of a sets of bytes
 *
 * @s: string
 * @accept: string to match
  *
 * Return: pointers to the byte in a that matches one of the bytes in accept
 * of NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
