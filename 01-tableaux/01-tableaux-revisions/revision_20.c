#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {4, 7, 12, 4, 8, 12, 15, 8, 20, 20, 20, 6, 6, 9};
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
					if (j < i)
					{
						second_found = 1;
					}
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