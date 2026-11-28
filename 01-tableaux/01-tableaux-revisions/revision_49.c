#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 0, 0, 5, 0, 0, 0, 7, 0, 0, 0, 0, 0, 4, 0, 0, 8};
	int count = 0;
	int length_max = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] == 0)
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
	printf("Longest consecutive zero sequence: %d\n", length_max);
	return (0);
}