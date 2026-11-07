#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-7, -12, -3, -25, -9, -18};
	int max = numbers[0];

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
		i++;
	}
	printf("Maximum %d\n", max);
	return (0);
}