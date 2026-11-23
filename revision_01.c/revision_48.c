#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 5, 0, -2, 7, 9, 0, 4, -6, 8, 12, -3, 0, 5, 7, 0};
	int count = 0;
	int length_max = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] != 0)
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
	printf("Longest consecutive non-zero sequence: %d\n", length_max);
	return (0);
}