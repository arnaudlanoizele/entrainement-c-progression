#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {4, 8, 15, 6, 12, 5};
	int sum = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		sum += numbers[i];
		i++;
	}
	printf("Sum %d\n", sum);
	return (0);
}