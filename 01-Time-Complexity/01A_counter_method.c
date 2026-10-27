#include <stdio.h>

int main(void)
{
    int n, i = 1, s = 1;
    long long count = 0;

    scanf("%d", &n);

    count++;  // i = 1
    count++;  // s = 1

    while (1)
    {
        count++;  // loop condition

        if (s > n)
            break;

        i++;
        count++;

        s += i;
        count++;
    }

    printf("Counter = %lld\n", count);
    return 0;
}
