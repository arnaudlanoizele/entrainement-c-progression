#include <stdio.h> 

int main(void)
{
	size_t i = 0;
	int numbers[] = {8, 15, 7, 21, 12, 9, 25, 33, 18, 11};
	int max = numbers[0];
	int found = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if ((numbers[i] % 2 != 0) && (numbers[i] % 3 == 0))
		{
			if (found == 0)
			{
				max = numbers[i];
				found = 1;
			}
			else if (numbers[i] > max)
			{
				max = numbers[i];
				// found = 1; pour rentrer dans ce else if found vaut deja 1
			}
		}
		i++;
	}
	if (found == 1)
	{
		printf("Largest odd number divisibles by 3: %d\n", max);
	}
	else
	{
		printf("No odd number divisible by 3 found.\n");
	}
	return (0);
}
