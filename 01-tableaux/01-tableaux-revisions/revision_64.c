#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {-4, -8, -6, -4, -12, -8, -6, -4,-12, -8, -10, -12, -14, -6, -3,-5, 8, 12, 0};
	int found = 0;
	int most_frequent = 0;
	int found_max = 0;
	int count_max = 0;
	int second_frequent = 0;
	int second_count = 0;
	int second_found = 0;
	int already_seen = 0;
	int third_frequent = 0;
	int third_count = 0;
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
		if (already_seen == 1 || numbers[i] % 2 != 0 || numbers[i] >= 0)
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
			if (second_found == 1)
			{
				third_frequent = second_frequent;
				third_count = second_count;
				third_found = 1;
			}
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
			(found > third_count) ||
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
		printf("Third most frequent even negative number: %d\n", third_frequent);
		printf("Occurrences: %d\n", third_count);
	}
	else
	{
		printf("Not enough even negative numbers.\n");
	}
	return (0);
}