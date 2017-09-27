#include <stdio.h>

int main(void)
{
    int n = 1;
    while (n <= 1000)
    {
        if (n % 3 == 0 || n % 5 == 0)
        {
            printf(n == 1000 ? "%d" : "%d, ", n);
        }
    }
}
