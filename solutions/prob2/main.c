#include <stdio.h>

int main(void)
{
	int prev = 1;
	int this = 2;
	int sum = 2;

	while (this <= 4e+6)
	{
		int temp = prev;
		prev = this;
		this += temp;

		if (this % 2 == 0)
		{
			sum += this;
		}
	}
	printf("%d", sum);
}