#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 0, 0, 5, 0, 0, 0, 0, 7, 0, 0, 2};
	int max = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] == 0)
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
	printf("Longest zero sequence length: %d\n", max);
	return (0);
}