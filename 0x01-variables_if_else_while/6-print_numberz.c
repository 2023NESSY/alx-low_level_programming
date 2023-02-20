#include <stdio.h>
/**
 * main - prints single digits below 10
 * Return: Always 0 (success)
 */
int mai(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
