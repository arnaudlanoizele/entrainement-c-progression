#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {18, 5, 12, 3, 9, 5, 14};
	int min = numbers[0];
	int second_min = 0;
	int third_min = 0;
	int found_second = 0;
	int found_third = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < min)
		{
			if (found_second == 1)
			{
				third_min = second_min;
				found_third = 1;
			}
			second_min = min;
			min = numbers[i];
			found_second = 1;
		}
		else if (
			(numbers[i] > min) &&
			(found_second == 0 || numbers[i] < second_min)
		)
		{
			if (found_second == 1)
			{
				third_min = second_min;
				found_third = 1;
			}
			second_min = numbers[i];
			found_second = 1;
		}
		else if (
			(found_second == 1) &&
			(numbers[i] > second_min) &&
			(found_third == 0 || numbers[i] < third_min)
		)
		{
			third_min = numbers[i];
			found_third = 1;
		}
	i++;
	}
	if (found_third == 1)
	{
		printf("Third smallest: %d\n", third_min);
	}
	else
	{
		printf("Not enough distinct numbers\n");
	}
	return (0);
}