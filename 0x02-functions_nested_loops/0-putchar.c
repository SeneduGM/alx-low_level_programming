#include "stdio.h"
#include "stdlib.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
