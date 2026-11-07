#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {0, 7, -3, 0, 12, -5, 0, 9};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] != 0)
		{
			count++;
		}
		i++;
	}
	printf("Non-zero numbers: %d\n", count);
	return (0);
}