#include "main.h"

/**
 * _chk_string - This will check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int _chk_string(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
	{
		return (1);
	}
	if (s1[i] == s2[j])
	{
		return (_chk_string(s1, s2, i + 1, j + 1));
	}
	if (s1[i] == '\0' && s2[j] == '*')
	{
		return (_chk_string(s1, s2, i, j + 1));
	}
	if (s2[j] == '*')
	{
		return (_chk_string(s1, s2, i + 1, j) || _chk_string(s1, s2, i, j + 1));
	}
	return (0);
}
/**
 * wildcmp -  function that compares two strings and
 * returns 1 if the strings can be considered identical, otherwise return 0.
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (_chk_string(s1, s2, 0, 0));
}
