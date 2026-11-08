#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {25, 8, 8, 3, 19, 11};
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
		else if ((found == 0 || numbers[i] < second_min) && (numbers[i] != min))
		{
			second_min = numbers[i];
			found = 1;
		}
		i++;
	}
	printf("Second smallest: %d\n", second_min);
	return (0);
}