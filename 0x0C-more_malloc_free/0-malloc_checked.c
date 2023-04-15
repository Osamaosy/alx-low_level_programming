#include "main.h"

/**
 * *malloc_checked - allocates memory using mallocat and exit if faild
 * @b: int
 * Return: pointer to array
 */

void *malloc_checked(unsigned int b)
{
	int *x = malloc(b);

	if (x == 0)
		exit(98);

	return (x);
}
