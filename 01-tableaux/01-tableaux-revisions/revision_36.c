#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 8, 4, 12, 8, 16, 3, 3, 12, 12};
	int count = 0;
	int result = 0;
	int already_seen = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		already_seen = 0;
		while (j < i)
		{
			if (numbers[i] == numbers[j])
			{
				already_seen = 1;
			}
			j++;
		}
		if (already_seen == 0)
		{
			j = 0;
			count = 0;
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					count++;
				}
				j++;
			}
			if (count == 2)
			{
				result++;
			}
		}
		i++;
	}
	printf("Value appearing exactly twice: %d\n", result);
	return (0);
}