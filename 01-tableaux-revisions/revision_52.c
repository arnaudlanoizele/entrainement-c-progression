#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {17, 8, 25, 11, 33, 25, 7, 41, 19, 33, 5, 29, 41, 13};
	int max = 0;
	int second_max = 0;
	int third_max = 0;
	int found = 0;
	int second_found = 0;
	int third_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
		{
			if (found == 0)
			{
				max = numbers[i];
				found = 1;
			}
			else if (numbers[i] > max)
			{
				if (second_found == 1)
				{
					third_max = second_max;
					third_found = 1;
				}
				second_max = max;
				max = numbers[i];
				second_found = 1;
			}
			else if (
				(found == 1) &&
				(numbers[i] < max) &&
				(second_found == 0 || numbers[i] > second_max)
			)
			{
				if (second_found == 1)
				{
					third_max = second_max;
					third_found = 1;
				}
				second_max = numbers[i];
				second_found = 1;
			}
			else if (
				(second_found == 1) &&
				(numbers[i] < second_max) &&
				(third_found == 0 || numbers[i] > third_max)
			)
			{
				third_max = numbers[i];
				third_found = 1;
			}
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third largest distinct odd numbers: %d\n", third_max);
	}
	else
	{
		printf("Not enough odd numbers.\n");
	}
	return (0);
}