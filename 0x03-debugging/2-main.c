#include <stdio.h>
#include "main.h"

/**
 * main - tests the largest_number function
 * Return: 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 10;
	b = -5;
	c = 20;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);
	 return 0;
}
