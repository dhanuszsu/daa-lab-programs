#include <stdio.h>

int main(void)
{
    int n, original, rev = 0, remainder;
    long long count = 0;

    scanf("%d", &n);
    original = n;

    while (n != 0)
    {
        count++;  // loop condition

        remainder = n % 10;
        count++;

        rev = rev * 10 + remainder;
        count++;

        n /= 10;
        count++;
    }

    count++;  // final false condition

    printf("%d\n", rev);
    printf("Counter = %lld\n", count);

    return 0;
}
