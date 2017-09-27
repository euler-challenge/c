#include <stdio.h>

int main(void)
{
    int n = 1;
	int sum = 0;

    while (n < 1000)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
			sum += n;
        }
        n++;
    }
	printf("%d", sum);
}
