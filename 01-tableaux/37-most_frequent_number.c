#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 8, 16, 4};
	int count = 0;
	int found = 0;
	int most_frequent = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
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
		if (found > count)
		{
			count = found;
			most_frequent = numbers[i];
		}
	i++;
	}
	printf("Most frequent number: %d\n", most_frequent);
	printf("Occurences: %d\n", count);
	return (0);
}