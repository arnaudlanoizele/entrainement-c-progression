#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 4, 5, 9, 10, 2, 3, 4, 5, 6};
	int max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i + 1] == numbers[i] + 1)
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
	printf("Longest sequence length: %d\n", max);
	return (0);
}