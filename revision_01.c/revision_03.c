#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {18, 7, 3, 12, 11, 5, 3, 9, 14};
	int min = 0;
	int second_min = 0;
	int found_min = 0;
	int found_second = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
		{
			if (found_min == 0)
			{
				min = numbers[i];
				found_min = 1;
			}
			else if (numbers[i] < min)
			{
				second_min = min;
				min = numbers[i];
				found_second = 1;
			}
			else if (
				(numbers[i] > min) &&
				(found_second == 0 || numbers[i] < second_min)
			)
			{
				second_min = numbers[i];
				found_second = 1;
			}
		}
		i++;
	}
	if (found_second == 1)
	{
		printf("Second smallest odd: %d\n", second_min);
	}
	else
	{
		printf("Not enough distinct numbers:\n");
	}
	return (0);
}