#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, 8, 12, 16, 21};
	int sum = 0;
	double average = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		sum += numbers[i];
		i++;
	}
	average = (double)sum / (sizeof(numbers) / sizeof(numbers[0]));
	printf("Average: %.2f\n", average);
	return (0);
}