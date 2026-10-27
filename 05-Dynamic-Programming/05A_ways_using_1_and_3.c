#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    long long dp[n + 1];

    for (int i = 0; i <= n; i++)
        dp[i] = 0;

    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] += dp[i - 1];

        if (i >= 3)
            dp[i] += dp[i - 3];
    }

    printf("%lld\n", dp[n]);
    return 0;
}
