#include <stdio.h>

/**
 * main - prints all possibledifferent combination of two digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int m;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
