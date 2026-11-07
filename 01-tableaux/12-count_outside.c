#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {3, 8, 12, 20, 5, 17, 25, 10, 2, 30};
	int count = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < 5 || numbers[i] > 20)
		{
			count++;
		}
		i++;
	}
	printf("Numbers outside: %d\n", count);
	return (0);
}