#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, 7, 9, 3, 5, 8, 12, 2, 6, 10, 15, 18, 1};
	int count = 1;
	int length_max = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i + 1] > numbers[i])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if (count > length_max)
		{
			length_max = count;
		}
		i++;
	}
	printf("Longest increasing sequence: %d\n", length_max);
	return (0);
}