#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 8, 16, 4};
	int count = 0;
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		found = 0;
		j = 0;
		while (j < i)
		{
			if (numbers[i] == numbers[j])
			{
				found = 1;
			}
			j++;
		}
		if (found == 0)
		{
			count++;
		}
	i++;
	}
	printf("Distinct numbers: %d\n", count);
	return (0);
}