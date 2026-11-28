#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {-7, -3, -9, -7, -5, -3, -11, -5, -9, -7, -11, -1, -4, -4, 3, 3, 0, 0};
	int found = 0;
	int max = 0;
	int found_max = 0;
	int second_max = 0;
	int second_found = 0;
	int third_max = 0;
	int third_found = 0;
	int already_seen = 0;
	int count_max = 0;
	int second_count = 0;
	int third_count = 0;

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
		if (already_seen == 0 && found >= 2 && numbers[i] < 0 && numbers[i] % 2 != 0)
		{
			if (found_max == 0)
			{
				count_max = found;
				max = numbers[i];
				found_max = 1;
			}
			else if (
				(numbers[i] > max)
			)
			{
				if (second_found == 1)
				{
					third_count = second_count;
					third_max = second_max;
					third_found = 1;
				}
				second_max = max;
				second_count = count_max;
				second_found = 1;
				count_max = found;
				max = numbers[i];
			}
			else if (
				(numbers[i] < max) &&
				(second_found == 0 || numbers[i] > second_max)
			)
			{
				if (second_found == 1)
				{
					third_max = second_max;
					third_count = second_count;
					third_found = 1;
				}
				second_max = numbers[i];
				second_count = found;
				second_found = 1;
			}
			else if (
				(second_found == 1) &&
				(numbers[i] < second_max) &&
				(third_found == 0 || numbers[i] > third_max)
			)
			{
				third_max = numbers[i];
				third_count = found;
				third_found = 1;
			}
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third largest negative odd number appearing at least twice: %d\n", third_max);
		printf("Occurrences: %d\n", third_count);
	}
	else
	{
		printf("Not enough distinct negative odd numbers.\n");
	}
	return (0);
}