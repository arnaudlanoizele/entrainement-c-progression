#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, -3, -7, -2, 5, -8, -1, -6, -9, -4, 3, -5, -2, 7, -1};
	int count = 0;
	int length_max = 0;

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
		if (count > length_max)
		{
			length_max = count;
		}
		i++;
	}
	printf("Longest consecutive negative sequence: %d\n", length_max);
	return (0);
}