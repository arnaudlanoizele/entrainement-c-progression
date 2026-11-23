#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {2, 7, 9, 11, 4, 3, 5, 7, 9, 13, 6, 15, 17, 19, 8, 1};
	int count = 0;
	int length_max = 0;

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
		if (count > length_max)
		{
			length_max = count;
		}
		i++;
	}
	printf("Longest consecutive odd sequence: %d\n", length_max);
	return (0);
}