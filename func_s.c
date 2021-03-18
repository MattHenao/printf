#include "holberton.h"

/**
 * func_s - Detecte if a data type is a string
 *
 * @li: List
 */

void func_s(va_list li)
{
	char *p;

	p = va_arg(li, char *);

	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		write(1, &p[i], 1);
	}
}
