#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 12, 8, 15, 12, 20, 15, 8, 25, 20, 20, 30, 30, 30};
	int found = 0;
	int count = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
		if (numbers[i] > 10)
		{
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					found++;
					if (j < i)
					{
						second_found = 1;
					}
				}
				j++;
			}
			if (found >= 2 && second_found == 0)
			{
				count++;
			}
		}
		i++;
	}
	printf("Distinct numbers greater than 10 appearing at least twice: %d\n", count);
	return (0);
}