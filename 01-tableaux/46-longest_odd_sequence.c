#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {2, 3, 5, 7, 8, 9, 11, 13, 15, 4, 17};
	int max = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
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
	printf("Longest odd sequence length: %d\n", max);
	return (0);
}