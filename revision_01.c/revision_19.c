#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 7, 8, 15, 3, 12, 9, 3, 20};
	int found = 0;
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		while (j < sizeof(numbers) / sizeof(numbers[0]))
		{
			if (numbers[i] == numbers[j])
			{
				found++;
			}
			j++;
		}
		if (found == 1)
		{
			count++;
		}
		i++;
	}
	printf("Numbers appearing exactly once: %d\n", count);
	return (0);
}