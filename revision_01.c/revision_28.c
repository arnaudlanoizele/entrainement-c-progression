#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {8, 12, 4, 8, 6, 12, 4, 8, 12, 6, 4, 10, 10, 7, 9, 15, 14};
	int found = 0;
	int found_min = 0;
	int count_min = 0;
	int less_frequent = 0;

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
			if (found_min == 0)
			{
				count_min = found;
				less_frequent = numbers[i];
				found_min = 1;
			}
			else if (found < count_min)
			{
				count_min = found;
				less_frequent = numbers[i];
			}
			else if (found == count_min && numbers[i] > less_frequent)
			{
				less_frequent = numbers[i];
			}
		}
		i++;
	}
	printf("Less frequent even numbers: %d\n", less_frequent);
	printf("Occurence %d\n", count_min);
	return (0);
}