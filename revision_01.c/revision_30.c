#include <stdio.h>

/**
 * main - Finds the second most frequent distinct even number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {
		8, 12, 4, 8, 6, 12, 4, 8, 12,
		6, 4, 10, 10, 14, 14, 14, 7, 9
	};
	int found = 0;
	int count_max = 0;
	int most_frequent = 0;
	int found_max = 0;
	int second_found = 0;
	int count_second = 0;
	int second_frequent = 0;
	int already_seen = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		already_seen = 0;

		/* Check if the number has already appeared */
		while (j < i)
		{
			if (numbers[i] == numbers[j])
				already_seen = 1;
			j++;
		}

		/* Skip duplicates and odd numbers */
		if (already_seen == 1 || numbers[i] % 2 != 0)
		{
			i++;
			continue;
		}

		j = 0;
		found = 0;

		/* Count occurrences */
		while (j < sizeof(numbers) / sizeof(numbers[0]))
		{
			if (numbers[i] == numbers[j])
				found++;
			j++;
		}

		/* Initialize first place */
		if (found_max == 0)
		{
			count_max = found;
			most_frequent = numbers[i];
			found_max = 1;
		}
		else if (found > count_max ||
			 (found == count_max && numbers[i] < most_frequent))
		{
			/* Move the old first place to second */
			second_frequent = most_frequent;
			count_second = count_max;
			second_found = 1;

			most_frequent = numbers[i];
			count_max = found;
		}
		else if (numbers[i] != most_frequent &&
			 (second_found == 0 ||
			  found > count_second ||
			  (found == count_second &&
			   numbers[i] < second_frequent)))
		{
			/* Update second place */
			second_frequent = numbers[i];
			count_second = found;
			second_found = 1;
		}

		i++;
	}

	if (second_found == 1)
	{
		printf("Second most frequent even number: %d\n",
		       second_frequent);
		printf("Occurrences: %d\n", count_second);
	}
	else
	{
		printf("Not enough distinct even numbers\n");
	}

	return (0);
}
