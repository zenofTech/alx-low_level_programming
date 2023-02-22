#include "main.h"
/**
 * main - function to execute the block of code
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (int i = 0; i < sizeof(c); i++)
	{
		_putchar(c[i]);
	}
_putchar('\n');
return (0);
}
