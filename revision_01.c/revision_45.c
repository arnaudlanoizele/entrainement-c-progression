#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {2, 5, 8, 3, 6, 4, 7, 10, 13, 16, 19, 2, 4, 9, 12, 15};
	int count = 1;
	int length_max = 1;

	while (i < sizeof(numbers) / sizeof(numbers[0]) - 1)
	{
		if (numbers[i] % 2 != numbers[i + 1] % 2)
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
	printf("Longest alternating even-odd sequence: %d\n", length_max);
	return (0);
}