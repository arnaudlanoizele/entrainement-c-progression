#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 3, 5, 5, 5, 2, 7, 7, 7, 7, 4};
	int max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i + 1] == numbers[i])
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
	printf("Longest equal sequence length: %d\n", max);
	return (0);
}