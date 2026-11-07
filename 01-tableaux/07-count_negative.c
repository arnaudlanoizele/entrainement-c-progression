#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {5, -3, 0, -12, 8, -1, 6, -7};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < 0)
		{
			count++;
		}
		i++;
	}
	printf("Negative numbers: %d\n", count);
	return (0);
}