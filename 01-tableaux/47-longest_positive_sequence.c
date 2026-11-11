#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-3, 5, 8, 12, -2, 4, 7, 9, 15, -6, 3};
	int max = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > 0)
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
	printf("Longest positive sequence length: %d\n", max);
	return (0);
}