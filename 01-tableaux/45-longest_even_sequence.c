#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {2, 4, 7, 8, 10, 12, 5, 6, 8, 10, 12, 14, 3};
	int max = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
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
	printf("Longest even sequence length: %d\n", max);
	return (0);
}