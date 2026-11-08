#include <stdio.h>

int main(void)
{
	size_t i = 0;
	int numbers[] = {-9, -3, -12, -6};
	int mul = numbers[0];
	int second_mul = 0;
	int found = 0;
	int found_multiple = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		if (numbers[i] % 3 == 0)
		{
			if (found_multiple == 0)
			{
				mul = numbers[i];
				found_multiple = 1;
			}
			else if (numbers[i] > mul)
			{
				second_mul = mul;
				mul = numbers[i];
				found = 1;
			}
			else if (
				(found == 0 || numbers[i] > second_mul) &&
				(numbers[i] != mul)
			)
			{
				second_mul = numbers[i];
				found = 1;
			}
		}
		i++;
	}
	if (found == 1)
	{
		printf("Second largest multiple of 3: %d\n", second_mul);
	}
	else
	{
		printf("No second distinct multiple of 3\n");
	}
	return (0);
}