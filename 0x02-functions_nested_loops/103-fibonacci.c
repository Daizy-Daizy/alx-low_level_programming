#include <stdio.h>

int main(void)
{
	int i = 1, j = 2, sum = 0, next;

	while (j < 4000000)

	{
	if (j % 2 == 0)
	{
	sum += j;
	}

	next = i + j;
	i = j;
	j = next;
	}

	 printf("%d\n", sum);

	return (0)i;
}
