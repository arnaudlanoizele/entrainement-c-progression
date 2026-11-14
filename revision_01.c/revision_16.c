#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 7, 4, 8, 7, 12, 8, 3, 3, 12, 6, 6, 6};
	int found = 0;
	int count = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
		if (numbers[i] % 2 == 0)
		{
			while (j < sizeof(numbers) / sizeof(numbers[0]))
			{
				if (numbers[i] == numbers[j])
				{
					found++;
				}
				j++;
			}
			j = 0;
			while (j < i)
			{
				if (numbers[i] == numbers[j])
				{
					second_found = 1;
				}
				j++;
			}
			if (found == 2 && second_found == 0)
			{
				count++;
			}
		}
		i++;
	}
	printf("Distinct even numbers appearing exactly twice: %d\n", count);
	return (0);
}