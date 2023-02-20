#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main is where the execution begins
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int check_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	check_last_digit = n % 10;

	if (check_last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, check_last_digit);
	else if (check_last_digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, check_last_digit);
	else if (check_last_digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, check_last_digit);

	return (0);
}
