#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {18, 7, 24, 12, 18, 30, 24, 6, 12, 36, 30, 8, 36, 20, 20, 14, 14, 42};
	int max = 0;
	int second_max = 0;
	int third_max = 0;
	int found_max = 0;
	int second_found_max = 0;
	int third_found_max = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
		if (numbers[i] % 2 == 0)
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
			if (found == 2 && second_found == 0)
			{
				if (found_max == 0)
				{
					max = numbers[i];
					found_max = 1;
				}
				else if (numbers[i] > max)
				{
					if (second_found_max == 1)
					{
						third_max = second_max;
						third_found_max = 1;
					}
					second_max = max;
					max = numbers[i];
					second_found_max = 1;
				}
				else if (
					(numbers[i] < max) &&
					(second_found_max == 0 || numbers[i] > second_max)
				)
				{
					if (second_found_max == 1)
					{
						third_max = second_max;
						third_found_max = 1;
					}
					second_max = numbers[i];
					second_found_max = 1;
				}
				else if (
					(second_found_max == 1) &&
					(numbers[i] < second_max) &&
					(third_found_max == 0 || numbers[i] > third_max)
				)
				{
					third_max = numbers[i];
					third_found_max = 1;
				}
			}
		}
		i++;
	}
	if (third_found_max == 1)
	{
		printf("Third largest even number appearing exactly twice: %d\n", third_max);
	}
	else
	{
		printf("No enough qualifying distinct even numbers.");
	}
	return (0);
}