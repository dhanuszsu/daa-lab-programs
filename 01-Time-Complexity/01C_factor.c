#include <stdio.h>

int main(void)
{
    int num, i;
    long long count = 0;

    scanf("%d", &num);

    for (i = 1; i <= num; ++i)
    {
        count++;  // loop condition
        count++;  // if condition

        if (num % i == 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    count++;  // final false loop condition
    printf("\nCounter = %lld\n", count);

    return 0;
}
