#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-12, -5, -19, -3, -8};
	int max = numbers[0];
	int second_max = 0;
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > max)
		{
			second_max = max;
			max = numbers[i];
			found = 1;
		}
		else if (
			(found == 0 || numbers[i] > second_max) &&
			(numbers[i] != max)
		)
		{
			second_max = numbers[i];
			found = 1;
		}
		i++;
	}
	if (found == 1)
	{
		printf("Second largest: %d\n", second_max);
	}
	else
	{
		printf("Not enough distinct numbers:\n");
	}
	return (0);
}