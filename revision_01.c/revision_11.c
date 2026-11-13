#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {18, 7, 24, 9, 12, 30, 24, 5, 36, 15, 30, 6};
	int max = numbers[0];
	int second_max = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if ((numbers[i] % 2 == 0) && (numbers[i] % 3 == 0))
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
				(found == 1) &&
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
		printf("Second largest distinct even number divisible by 3: %d\n", second_max);
	}
	else
	{
		printf("Not enough even number divisible by 3.\n");
	}
	return (0);
}