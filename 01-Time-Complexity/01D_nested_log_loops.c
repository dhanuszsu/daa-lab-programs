#include <stdio.h>

int main(void)
{
    int n, i, j, k;
    long long count = 0;

    scanf("%d", &n);

    for (i = n / 2; i <= n; i++)
    {
        count++;

        for (j = 1; j <= n; j *= 2)
        {
            count++;

            for (k = 1; k <= n; k *= 2)
            {
                count++;
            }
            count++;  // final k condition
        }
        count++;  // final j condition
    }
    count++;  // final i condition

    printf("Counter = %lld\n", count);
    return 0;
}
