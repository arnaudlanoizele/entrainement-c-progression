#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, -5, 7, -2, 4, 6, -8, 10, -3, 5, -7, 9, 2};
	int max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if ((numbers[i] > 0 && numbers[i + 1] < 0) ||
		(numbers[i] < 0 && numbers[i + 1] > 0))
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if (count > max)
		{
			max = count;
		}
		i++;
	}
	printf("Longest alternating sign sequence length: %d\n", max);
	return (0);
}