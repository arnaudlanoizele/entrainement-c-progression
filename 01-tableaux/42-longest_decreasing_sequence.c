#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {9, 8, 7, 3, 2, 10, 9, 8, 7, 6, 4};
	int max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i + 1] == numbers[i] - 1)
		{
			count++;
		}
		else
		{
			count = 1;
		}

		if (count > max)
		{
			max = count;
		}
		i++;
	}
	printf("Longest decreasing sequence length: %d\n", max);
	return (0);
}