#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {9, -6, 12, 9, 3, -6, 15, 12, 9, 3, -9, 18, 15, 0, 7, -4, 12, 21};
	int found = 0;
	int count_min = 0;
	int least_frequent = 0;
	int found_min = 0;
	int second_count = 0;
	int second_found = 0;
	int second_frequent = 0;
	int already_seen = 0;
	int third_count = 0;
	int third_frequent = 0;
	int third_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		already_seen = 0;
		while (j < i)
		{
			if (numbers[i] == numbers[j])
			{
				already_seen = 1;
			}
			j++;
		}
		if (already_seen == 1 || numbers[i] % 3 != 0)
		{
			i++;
			continue;
		}
		j = 0;
		found = 0;
		while (j < sizeof(numbers) / sizeof(numbers[0]))
		{
			if (numbers[i] == numbers[j])
			{
				found++;
			}
			j++;
		}
		if (found_min == 0)
		{
			count_min = found;
			least_frequent = numbers[i];
			found_min = 1;
		}
		else if (
			(found < count_min) ||
			(found == count_min && numbers[i] < least_frequent)
		)
		{
			if (second_found == 1)
			{
				third_frequent = second_frequent;
				third_count = second_count;
				third_found = 1;
			}
			second_frequent = least_frequent;
			second_count = count_min;
			second_found = 1;
			least_frequent = numbers[i];
			count_min = found;
		}
		else if (
			(second_found == 0) ||
			(found < second_count) ||
			(
				(found == second_count) &&
				(numbers[i] < second_frequent)
			)
		)
		{
			if (second_found == 1)
			{
				third_frequent = second_frequent;
				third_count = second_count;
				third_found = 1;
			}
			second_frequent = numbers[i];
			second_count = found;
			second_found = 1;
		}
		else if (
			(third_found == 0) ||
			(found < third_count) ||
			(
				(found == third_count) &&
				(numbers[i] < third_frequent)
			)
		)
		{
			third_frequent = numbers[i];
			third_count = found;
			third_found = 1;
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third least frequent multiple of 3: %d\n", third_frequent);
		printf("Occurrences: %d\n", third_count);
	}
	else
	{
		printf("Not enough distinct multiple of 3.\n");
	}
	return (0);
}