#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, 15, 10, 23, 7, 11, -5, 30};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] > 10)
		{
			count++;
		}
		i++;
	}
	printf("Numbers greater than 10: %d\n", count);
	return (0);
}