#include "function_pointers.h"
#include <stdio.h>
	/**
	 * print_name - This is a pointer to function that prints a name.
	 * @name: It adds names
	 * @f: pointer to function
	 * Return: void
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
		{
			return;
		}
		f(name);
	}
