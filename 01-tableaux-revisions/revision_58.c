#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {-4, -8, 12, -4, -3, -8, -6, -4, -3, -8, -6, -3, -4, 0, 7};
	int found = 0;
	int count_max = 0;
	int found_max = 0;
	int second_found = 0;
	int second_count = 0;
	int second_frequent = 0;
	int most_frequent = 0;
	int already_seen = 0;

	while (i < sizeof(numbers) /sizeof(numbers[0]))
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
		if (already_seen == 1 || numbers[i] >= 0)
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
		if (found_max == 0)
		{
			count_max = found;
			most_frequent = numbers[i];
			found_max = 1;
		}
		else if (
			(found > count_max) ||
			(found == count_max && numbers[i] < most_frequent)
		)
		{
			second_frequent = most_frequent;
			second_count = count_max;
			second_found = 1;
			most_frequent = numbers[i];
			count_max = found;
		}
		else if (
			(second_found == 0) ||
			(found > second_count) ||
			(
				(found == second_count) &&
				(numbers[i] < second_frequent)
			)
		)
		{
			second_frequent = numbers[i];
			second_count = found;
			second_found = 1;
		}
		i++;
	}
	if (second_found == 1)
	{
		printf("Second most frequent negative number: %d\n", second_frequent);
		printf("Occurrences: %d\n", second_count);
	}
	else
	{
		printf("Not enough distinct negative numbers.\n");
	}
	return (0);
}