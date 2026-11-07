#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 8, 12, 7, 15, 20, 6};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 2 == 0)
		{
			count++;
		}
		i++;
	}
	printf("Even numbers: %d\n", count);
	return (0);
}