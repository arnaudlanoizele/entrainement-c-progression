#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 2, 4, 6, 8, 5, 10, 12, 14, 8, 16, 18, 20, 22, 24, 7};
	int count = 0;
	int length_max = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i] % 2 == 0 && numbers[i + 1] % 2 == 0 && numbers[i + 1] > numbers[i])
		{
			if (count == 0)
			{
				count = 2;
			}
			else
			{
				count++;
			}
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
	printf("Longest increasing even sequence: %d\n", length_max);
	return (0);
}