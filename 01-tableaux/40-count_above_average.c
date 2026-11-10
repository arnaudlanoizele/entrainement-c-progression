#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, 8, 12, 16, 20};
	int sum = 0;
	int count = 0;
	double average = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		sum += numbers[i];
		i++;
	}
	average = (double)sum / (sizeof(numbers) / sizeof(numbers[0]));
	i = 0;
	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > average)
		{
			count++;
		}
	i++;
	}
	printf("Average: %.2f\n", average);
	printf("Numbers above average %d\n", count);
	return (0);
}