#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c < '9')
		{
			putchar(c);
			putchar(',');
			putchar(' ');
			continue;
		}
		else if (c == '9')
			putchar(c);
	}

	return (0);
}
