#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: 0 if successful
 */
int main(void)
{
	int sum = 0;
	int a;
	int b;
	int second = 1;

	a = 1;
	b = 2;

	while (b < 4000000)
	{
		second = a + b;
		a = b;
		b = second;
		if ((second <= 4000000) && (second % 2 == 0))
			sum += second;
	}
	printf("%d\n", sum);

	return (0);
}
