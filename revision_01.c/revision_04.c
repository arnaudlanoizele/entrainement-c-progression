#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {13, 8, 24, 7, 16, 24, 32, 5, 18, 32, 10};
	int max = 0;
	int second_max = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
		{
			if (found == 0)
			{
				max = numbers[i];
				found = 1;
			}
			else if (numbers[i] > max)
			{
				second_max = max;
				max = numbers[i];
				second_found = 1;
			}
			else if (
				(numbers[i] < max) &&
				(second_found == 0 || numbers[i] > second_max)
			)
			{
				second_max = numbers[i];
				second_found = 1;
			}
		}
		i++;
	}
	if (second_found == 1)
	{
		printf("Second largest even: %d\n", second_max);
	}
	else
	{
		printf("Not enough distinct numbers:\n");
	}
	return (0);
}