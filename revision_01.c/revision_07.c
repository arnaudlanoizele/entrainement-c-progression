#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {18, 7, 12, 4, 18, 9, 6, 12, 4, 20};
	int min = 0;
	int second_min = 0;
	int found = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
		{
			if (found == 0)
			{
				min = numbers[i];
				found = 1;
			}
			else if (numbers[i] < min)
			{
				second_min = min;
				min = numbers[i];
				second_found = 1;
			}
			else if (
				(found == 1) &&
				(numbers[i] > min) &&
				(second_found == 0 || numbers[i] < second_min)
			)
			{
				second_min = numbers[i];
				second_found = 1;
			}
		}
		i++;
	}
	if (second_found == 1)
	{
		printf("Second smallest distinct even: %d\n", second_min);
	}
	else
	{
		printf("Not enough distinct numbers even:\n");
	}
	return (0);
}