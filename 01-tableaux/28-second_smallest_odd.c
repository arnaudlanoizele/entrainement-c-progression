#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {9, 3, 3, 7, 9, 5};
	int min = numbers[0];
	int second_min = 0;
	int found_odd = 0;
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
		{
			if (found_odd == 0)
			{
				min = numbers[i];
				found_odd = 1;
			}
			else if (numbers[i] < min)
			{
				second_min = min;
				min = numbers[i];
				found = 1;
			}
			else if (
				(found == 0 || numbers[i] < second_min) &&
				(numbers[i] != min)
			)
			{
				second_min = numbers[i];
				found = 1;
			}
		}
		i++;
	}
	if (found == 0)
	{
		printf("No second smallest distinct odd number found\n");
	}
	else
	{
		printf("Second smallest odd %d\n", second_min);
	}
	return (0);
}