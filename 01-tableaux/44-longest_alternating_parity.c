#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {2, 5, 8, 3, 7, 4, 9, 12, 6, 11};
	int max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0] - 1))
	{
		if (numbers[i + 1] % 2 != numbers[i] % 2)
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
	printf("Longest alternating sequence length: %d\n", max);
	return (0);
}