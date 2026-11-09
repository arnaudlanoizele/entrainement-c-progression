#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {25, 8, 14, 3, 19, 11, 8};
	int min = numbers[0];
	int second_min = 0;
	int third_min = 0;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < min)
		{
			if (count >= 2)
			{
				third_min = second_min;
			}
			second_min = min;
			min = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		else if (
			(numbers[i] > min) &&
			(count == 1 || numbers[i] < second_min)
		)
		{
			if (count >= 2)
			{
				third_min = second_min;
			}
			second_min = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		else if (
			(count != 1) &&
			(numbers[i] > second_min) &&
			(count == 2 || numbers[i] < third_min)
		)
		{
			third_min = numbers[i];
			if (count < 3)
			{
				count++;
			}
		}
		i++;
	}
	if (count == 3)
	{
		printf("Third smallest: %d\n", third_min);
	}
	else
	{
		printf("Not enough distinct numbers\n");
	}
	return (0);
}