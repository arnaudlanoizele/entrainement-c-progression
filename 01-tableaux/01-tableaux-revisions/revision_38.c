#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 8, 16, 4, 3, 12, 4, 8, 8, 8};
	int count = 0;
	int count_min = 0;
	int least_frequent = 0;
	int already_seen = 0;
	int found = 0;

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
			if (found == 0)
			{
				count_min = count;
				least_frequent = numbers[i];
				found = 1;
			}
			else if (count < count_min)
			{
				count_min = count;
				least_frequent = numbers[i];
			}
		}
		i++;
	}
	printf("Least frequent value: %d\n", least_frequent);
	printf("Occurences: %d\n", count_min);
	return (0);
}