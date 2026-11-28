#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 8, 16, 4, 3, 12, 4, 8, 8, 8};
	int count = 0;
	int count_max = 0;
	int most_frequent = 0;
	int already_seen = 0;

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
		if (already_seen == 0)
		{
			j = 0;
			count = 0;
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					count++;
				}
				j++;
			}
			if (count > count_max)
			{
				count_max = count;
				most_frequent = numbers[i];
			}
		}
		i++;
	}
	printf("Most frequent value: %d\n", most_frequent);
	printf("Occurences: %d\n", count_max);
	return (0);
}