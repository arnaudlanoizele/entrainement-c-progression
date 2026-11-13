#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {13, 8, 25, 17, 25, 6, 31, 19, 31, 11, 22, 27};
	int max = numbers[0];
	int second_max = 0;
	int found = 0;
	int second_found = 0;

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
				second_max = numbers[i];
				second_found = 1;
			}
		}
		i++;
	}
	if (second_found == 1)
	{
		printf("Second largest distinct odd: %d\n", second_max);
	}
	else
	{
		printf("No odd numbers distinct.\n");
	}
	return (0);
}