#include <stdio.h>
/**
 * main - program that prints numbers from 0 to 99.
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 99)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
putchar('\n');
return (0);
}
