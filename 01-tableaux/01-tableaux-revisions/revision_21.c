#include <stdio.h>

int main(void)
{
	size_t i = 0;
	size_t j = 0;
	int numbers[] = {7, 3, 7, 12, 3, 9, 7, 5, 9, 5, 3, 9, 9, 11, 11, 11};
	int found = 0;
	int count = 0;
	int second_found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		j = 0;
		found = 0;
		second_found = 0;
		if (numbers[i] % 2 != 0)
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
			if (found >= 3 && second_found == 0)
			{
				count++;
			}
		}
		i++;
	}
	printf("Distinct odd numbers appearing at least three times: %d\n", count);
	return(0);
}