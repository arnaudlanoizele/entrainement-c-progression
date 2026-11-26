#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {12, -5, 8, 12, 20, -5, 8, 15, 20, 30, 15, 30, 30, -10, -10, 25, 0, 0};
	int found = 0;
	int found_max = 0;
	int max = 0;
	int second_max = 0;
	int second_found = 0;
	int already_seen = 0;
	int third_max = 0;
	int third_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		already_seen = 0;
		while (j < sizeof(numbers) / sizeof(numbers[0]))
		{
			if (numbers[i] == numbers[j])
			{
				found++;
				if (j < i)
				{
					already_seen = 1;
				}
			}
			j++;
		}
		if (found == 2 && already_seen == 0 && numbers[i] != 0)
		{
			if (found_max == 0)
			{
				max = numbers[i];
				found_max = 1;
			}
			else if (numbers[i] > max)
			{
				if (second_found == 1)
				{
					third_max = second_max;
					third_found = 1;
				}
				second_max = max;
				max = numbers[i];
				second_found = 1;
			}
			else if (
				(numbers[i] < max) &&
				(second_found == 0 || numbers[i] > second_max)
			)
			{
				if (second_found == 1)
				{
					third_max = second_max;
					third_found = 1;
				}
				second_max = numbers[i];
				second_found = 1;
			}
			else if (
				(second_found == 1) &&
				(numbers[i] < second_max) &&
				(third_found == 0 || numbers[i] > third_max)
			)
			{
				third_max = numbers[i];
				third_found = 1;
			}
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third largest number appearing exactly twice: %d\n", third_max);
		printf("Occurrences: 2\n");
	}
	else
	{
		printf("Not enough distinct numbers appearing exactly twice.\n");
	}
	return (0);
}