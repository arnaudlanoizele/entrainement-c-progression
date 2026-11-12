#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {7, 3, 7, 12, 3, 9, 12, 5, 9, 5, 18};
	int count = 0;
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
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
	printf("Distinct value: %d\n", count);
	return (0);
}