#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {10, -5, 10, -5};
	int max = numbers[0];
	int second_max = 0;
	int third_max = 0;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > max)
		{
			if (count >= 2)
			{
				third_max = second_max;
			}
			second_max = max;
			max = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		else if (
			(numbers[i] < max) &&
			(count == 1 || numbers[i] > second_max)
		)
		{
			if (count >= 2)
			{
				third_max = second_max;
			}
			second_max = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		else if (
			(count != 1) &&
			(numbers[i] < second_max) &&
			(count == 2 || numbers[i] > third_max)
		)
		{
			third_max = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		i++;
	}
	if (count == 3)
	{
		printf("Third largest: %d\n", third_max);
	}
	else
	{
		printf("No third distinct number found\n");
	}
	return (0);
}