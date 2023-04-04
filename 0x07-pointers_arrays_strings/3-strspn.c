#include "main.h"
/**
 * _strspn -calculates the length (in bytes) of the initial segment of s which consists entirely of bytes in accept
 * @s: initial segment
 * @accept collects byte
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
