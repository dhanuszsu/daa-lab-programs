#include <stdio.h>

int main(void)
{
    int n, i, j;
    long long count = 0;

    scanf("%d", &n);

    count++;  // if condition

    if (n != 1)
    {
        for (i = 1; i <= n; i++)
        {
            count++;  // outer loop condition

            for (j = 1; j <= n; j++)
            {
                count++;  // inner loop condition

                printf("");
                printf("");
                count += 2;

                break;
            }

            count++;  // inner loop false condition
        }

        count++;  // outer loop false condition
    }
    else
    {
        printf("");
    }

    printf("Counter = %lld\n", count);
    return 0;
}
