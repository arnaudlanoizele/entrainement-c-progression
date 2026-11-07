#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-4, 7, 0, 12, -9, 3, -2, 8};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > 0)
		{
			count++;
		}
		i++;
	}
	printf("Positive numbers: %d\n", count);
	return (0);
}