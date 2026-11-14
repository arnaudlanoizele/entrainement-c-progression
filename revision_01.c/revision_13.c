#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {8, 4, 12, 8, 6, 4, 15, 6, 12, 12, 3, 3};
	int found = 0;
	int count = sizeof(numbers) / sizeof(numbers[0]);
	int min = 0;
	int second_found = 0;

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
		if (found == 2)
		{
			count = found;
			if (second_found == 0)
			{
				min = numbers[i];
				second_found = 1;
			}
			else if (
				(numbers[i] < min)
			)
			{
				min = numbers[i];
				second_found = 1;
			}
		}
		i++;
	}
	printf("Smallest number occurring exactly twice: %d\n", min);
	printf("Occurrences: %d\n", count);
	return (0);
}