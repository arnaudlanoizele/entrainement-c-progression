#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, -2, 5, 8, 12, -4, 7, 9, 15, 6, 11, -3, 4, 8, -1};
	int count = 0;
	int length_max = 0;

	while (i < sizeof(numbers) / sizeof(numbers[i]))
	{
		if (numbers[i] > 0)
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
	printf("Longest consecutive positive sequence: %d\n", length_max);
	return (0);
}