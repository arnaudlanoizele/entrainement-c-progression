#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {8, 4, 12, 8, 6, 4, 15, 6, 12, 12, 3, 3};
	int min = 0;
	int found_min = 0;
	int found = 0;
	int second_found;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
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
			if (found_min == 0)
			{
				min = numbers[i];
				found_min = 1;
			}
			else if (numbers[i] < min)
			{
				min = numbers[i];
			}
		}
		i++;
	}
	if (found_min == 1)
	{
    printf("Smallest number appearing exactly twice: %d\n", min);
	}
	else
	{
    printf("No number appears exactly twice\n");
	}
	return (0);
}