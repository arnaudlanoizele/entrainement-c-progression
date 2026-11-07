#include <stdio.h>

int main(void)
{
	size_t i = 1;
	int numbers[] = {12, 45, 45, 28, 36, 19};
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
		else if ((found == 0 || numbers[i] > second_max) && (numbers[i] != max))
		{
			second_max = numbers[i];
			found = 1;
		}
		i++;
	}
	printf("Second largest: %d\n", second_max);
	return (0);
}