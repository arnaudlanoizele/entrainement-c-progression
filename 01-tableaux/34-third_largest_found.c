#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {12, 45, 7, 28, 36, 19, 45};
	int max = numbers[0];
	int second_max = 0;
	int third_max = 0;
	int found_second = 0;
	int found_third = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > max)
		{
			if (found_second == 1)
			{
				third_max = second_max;
				found_third = 1;
			}
			second_max = max;
			max = numbers[i];
			found_second = 1;
		}
		else if (
			(numbers[i] < max) &&
			(found_second == 0 || numbers[i] > second_max)
		)
		{
			if (found_second == 1)
			{
				third_max = second_max;
				found_third = 1;
			}
			second_max = numbers[i];
			found_second = 1;
		}
		else if (
			(found_second == 1) &&
			(numbers[i] < second_max) &&
			(found_third == 0 || numbers[i] > third_max)
		)
		{
			third_max = numbers[i];
			found_third = 1;
		}
	i++;
	}
	if (found_third == 1)
	{
		printf("Third largest: %d\n", third_max);
	}
	else
	{
		printf("Not enough distinct number\n");
	}
	return (0);
}