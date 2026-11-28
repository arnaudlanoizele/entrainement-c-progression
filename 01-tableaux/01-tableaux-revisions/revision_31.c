#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {17, 8, 3, 12, 5, 8, 3, 21, 7, 5, 14};
	int found = 0;
	int second_found = 0;
	int third_found = 0;
	int min = 0;
	int second_min = 0;
	int third_min = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (found == 0)
		{
			min = numbers[i];
			found = 1;
		}
		else if (numbers[i] < min)
		{
			if (second_found == 1)
			{
				third_min = second_min;
				third_found = 1;
			}
			second_min = min;
			min = numbers[i];
			second_found = 1;
		}
		else if (
			(numbers[i] > min) &&
			(second_found == 0 || numbers[i] < second_min)
		)
		{
			if (second_found == 1)
			{
				third_min = second_min;
				third_found = 1;
			}
			second_min = numbers[i];
			second_found = 1;
		}
		else if (
			(second_found == 1) &&
			(numbers[i] > second_min) &&
			(third_found == 0 || numbers[i] < third_min)
		)
		{
			third_min = numbers[i];
			third_found = 1;
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third smallest distinct: %d\n", third_min);
	}
	else
	{
		printf("Not enough distinct numbers:\n");
	}
	return (0);
}