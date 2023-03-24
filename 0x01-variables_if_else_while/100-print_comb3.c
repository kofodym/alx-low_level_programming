#include <stdio.h>

/**
 * main - This is the main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9' ; i++)
	{
		for (j = '1' ; j <= '9' ; j++)
		{
			if (i < j && i != j)
			{
				putchar(i);
				putchar(j);

				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
