#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 4, 8, 12, 7, 6, 10, 14, 18, 5, 2, 4, 6, 8, 10, 3};
	int count = 0;
	int length_max = 0;

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
		if (count > length_max)
		{
			length_max = count;
		}
		i++;
	}
	printf("Longest consecutive even sequence: %d\n", length_max);
	return (0);
}