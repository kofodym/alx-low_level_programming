#include "main.h"
/**
 *_memcpy - function copies n bytes from memory area
 *@dest: memory area
 *@src: copies n bytes from memory area src
 *@n: no of bytes
 *
 *Return: return a value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
