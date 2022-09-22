#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, length = 0;

	while (*(dest + lenght) !='\0')
		lenght++;
	for (i = 0; *(src + i) != '\0'; i++)
	{ 
		*(dest + lenght) = *(src + i);
		lenght++;
	}
	*(dest + lenght) = *(src + i);

	return (dest);
}
