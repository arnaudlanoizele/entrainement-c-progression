#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {12, 5, 8, 12, 3, 5, 15, 8, 7, 3, 20, 7, 15, 20, 4, 4, 25};
	int min = 0;
	int second_min = 0;
	int third_min = 0;
	int found_min = 0;
	int second_found_min = 0;
	int third_found_min = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
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
			if (found_min == 0)
			{
				min = numbers[i];
				found_min = 1;
			}
			else if (numbers[i] < min)
			{
				if (second_found_min == 1)
				{
					third_min = second_min;
					third_found_min = 1;
				}
				second_min = min;
				min = numbers[i];
				second_found_min = 1;
			}
			else if (
				(numbers[i] > min) &&
				(second_found_min == 0 || numbers[i] < second_min)
			)
			{
				if (second_found_min == 1)
				{
					third_min = second_min;
					third_found_min = 1;
				}
				second_min = numbers[i];
				second_found_min = 1;
			}
			else if (
				(second_found_min == 1) &&
				(numbers[i] > second_min) &&
				(third_found_min == 0 || numbers[i] < third_min)
			)
			{
				third_min = numbers[i];
				third_found_min = 1;
			}
		}
		i++;
	}
	if (third_found_min == 1)
	{
		printf("Third smallest number appearing exactly twice: %d\n", third_min);
	}
	else
	{
		printf("No number exactly twice.");
	}
	return (0);
}