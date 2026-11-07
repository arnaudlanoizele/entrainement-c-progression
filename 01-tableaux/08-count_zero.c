#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {0, 5, -3, 0, 12, 0, -7, 0};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] == 0)
		{
			count++;
		}
		i++;
	}
	printf("Zeros: %d\n", count);
	return (0);
}