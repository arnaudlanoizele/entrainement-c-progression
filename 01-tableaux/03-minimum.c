#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-14, -6, -23, -2, -18, -9};
	int min = numbers[0];

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
		i++;
	}
	printf("Minimum %d\n", min);
	return (0);
}