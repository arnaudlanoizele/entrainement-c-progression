#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {5, -3, -7, -2, 8, -4, -6, -9, -1, 12, -5};
	int max = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < 0)
		{
			count++;
		}
		else
		{
			count = 0;
		}
		if (count > max)
		{
			max = count;
		}
		i++;
	}
	printf("Longest negative sequence length: %d\n", max);
	return (0);
}