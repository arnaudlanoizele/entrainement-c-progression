#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {24, 18, 12};
	int max = numbers[0];
	int second_max = 0;
	int found = 0;
	int found_even = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
		{
			if (found_even == 0)
			{
				max = numbers[i];
				found_even = 1;
			}
			else if (numbers[i] > max)
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
		}
		i++;
	}
	printf("Second Largest even: %d\n", second_max);
	return (0);
}