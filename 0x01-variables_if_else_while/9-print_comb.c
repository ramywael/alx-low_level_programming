#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c < 57)
		{
			putchar(c);
			putchar(',');
			putchar(' ');
			continue;
		}
		else if (c == 57)
			putchar(c);
	}

	return (0);
}
