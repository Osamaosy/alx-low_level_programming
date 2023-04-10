#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @argc: int
 * @argv: int
 * return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return(0);
}
