#include <stdio.h>

int main(void)
{
	int prev = 0;
	int curr = 1;
	int next;

	printf("%d, %d, ", prev, curr);

	for (int i = 0; i < 96; i++)
	{
	next = prev + curr;
	printf("%d, ", next);
	prev = curr;
	curr = next;
	}
	printf("\n");

	return (0);
}
