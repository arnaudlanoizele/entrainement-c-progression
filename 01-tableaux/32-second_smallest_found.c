#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {18, 5, 12, 3, 9, 5, 14};
	int min = numbers[0];
	int second_min = 0;
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < min)
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
		i++;
	}
	if (found == 1)
	{
		printf("Second smallest: %d\n", second_min);
	}
	else
	{
		printf("Not enough distinct numbers\n");
	}
	return (0);
}