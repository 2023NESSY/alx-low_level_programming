#include <stdio.h>
/**
 * main - prints the Alphabet in lowercase
 * followed by a new line, except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
