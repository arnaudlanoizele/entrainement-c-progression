#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {20, 15, 10, 3, 18, 14, 9, 5, 2, 25, 20, 12, 7, 1, 30};
	int length_max = 1;
	int count = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i + 1] < numbers[i])
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
	printf("Longest decreasing sequence: %d\n", length_max);
	return (0);
}