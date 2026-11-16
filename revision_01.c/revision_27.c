#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {8, 12, 4, 8, 6, 12, 4, 8, 12, 6, 4, 10, 10, 7, 9, 15};
	int found = 0;
	int count_max = 0;
	int most_frequent = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		if (numbers[i] % 2 == 0)
		{
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					found++;
				}
				j++;
			}
			if (found > count_max)
			{
				count_max = found;
				most_frequent = numbers[i];
			}
			else if (found == count_max && numbers[i] < most_frequent)
			{
				most_frequent = numbers[i];
			}

		}
		i++;
	}
	printf("Most frequent even number: %d\n", most_frequent);
  printf("Occurrences: %d\n", count_max);

  return (0);
}