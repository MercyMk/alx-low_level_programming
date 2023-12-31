#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int t = 0;
	int s = 0;

	while (*(src + t) != '\0')
	{
		t++;
	}
	for (; s < t; s++)
	{
		dest[s] = src[s];
	}
	dest[t] = '\0';
	return (dest);
}
