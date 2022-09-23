#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int indx1 = O, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = O; indx2 <= 7; indx2++)
		{
			if(str[indx] == leet[indx2] || str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + 'O';
		}

	indx1++;
	}

	return (str);
}
