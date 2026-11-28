#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {12, -8, 4, 12, -4, -8, 6, 4, -4, 12, -8, 4, -4, 6, 6, -10, -10, 7, 7, 7, 0, 0, 0};
	int found = 0;
	int min = 0;
	int found_min = 0;
	int already_seen = 0;
	int second_found = 0;
	int second_min = 0;
	int third_found = 0;
	int third_min = 0;

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
		if (already_seen == 0 && found == 3 && numbers[i] % 2 == 0 && numbers[i] != 0)
		{
			if (found_min == 0)
			{
				min = numbers[i];
				found_min = 1;
			}
			else if (numbers[i] < min)
			{
				if (second_found == 1)
				{
					third_min = second_min;
					third_found = 1;
				}
				second_min = min;
				min = numbers[i];
				second_found = 1;
			}
			else if (
				(numbers[i] > min) &&
				(second_found == 0 || numbers[i] < second_min)
			)
			{
				if (second_found == 1)
				{
					third_min = second_min;
					third_found = 1;
				}
				second_min = numbers[i];
				second_found = 1;
			}
			else if (
				(second_found == 1) &&
				(numbers[i] > second_min) &&
				(third_found == 0 || numbers[i] < third_min)
			)
			{
				third_min = numbers[i];
				third_found = 1;
			}
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third smallest even number appearing exactly three times: %d\n", third_min);
		printf("Occurrences: 3\n");
	}
	else
	{
		printf("Not enough distinct even numbers.\n");
	}
	return (0);
}