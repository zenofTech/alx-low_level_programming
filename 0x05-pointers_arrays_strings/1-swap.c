#include "main.h"

/* 
* swap_int - swaps the values of int a and int b
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
