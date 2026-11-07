#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, -8, -5, 12, 7, -9, 20, 6};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 != 0)
		{
			count++;
		}
		i++;
	}
	printf("Odd numbers: %d\n", count);
	return (0);
}