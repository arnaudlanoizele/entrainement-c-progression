#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {17, 8, 9, 25, 3, 12, 9, 15, 7, 3, 21, 11};
	int min = numbers[0];
	int second_min = 0;
	int third_min = 0;
	int found = 0;
	int second_found = 0;
	int third_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
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
		}
		i++;
	}
	if (third_found == 1)
	{
		printf("Third smallest dinstinct odd: %d\n", third_min);
	}
	else
	{
		printf("No odd distinct number.\n");
	}
	return (0);
}