#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 8, 12, 7, 15, 20, 6};
	int sum = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
		{
			sum += numbers[i];
		}
		i++;
	}
	printf("Sum of even numbers: %d\n", sum);
	return (0);
}