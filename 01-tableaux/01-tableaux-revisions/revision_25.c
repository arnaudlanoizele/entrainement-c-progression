#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {15, 8, 21, 15, 7, 21, 33, 9, 33, 7, 25, 9, 25, 41, 12, 18, 41, 35, 11, 35, 50};
	int max = 0;
	int second_max = 0;
	int found_max = 0;
	int second_found_max = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
		if (numbers[i] % 2 != 0)
		{
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					found++;
					if (j < i)
					{
						second_found = 1;
					}
				}
				j++;
			}
			if (found >= 2 && second_found == 0)
			{
				if (found_max == 0)
				{
					max = numbers[i];
					found_max = 1;
				}
				else if (numbers[i] > max)
				{
					second_max = max;
					max = numbers[i];
					second_found_max = 1;
				}
				else if (
					(found_max == 1) &&
					(numbers[i] < max) &&
					(second_found_max == 0 || numbers[i] > second_max)
				)
				{
					second_max = numbers[i];
					second_found_max = 1;
				}
			}
		}
		i++;
	}
	if (second_found_max == 1)
	{
		printf("Second largest odd number appearing at least twice: %d\n", second_max);
	}
	else
	{
		printf("No enough qualifying distinct odd.");
	}
	return (0);
}