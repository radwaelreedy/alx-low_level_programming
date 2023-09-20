#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @dest:char type string
 * @src: chat type string
 * Description:copy the string pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: pointer to 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = scr[i];
	} while (scr[i] != '\0');
	return (dest);
}
