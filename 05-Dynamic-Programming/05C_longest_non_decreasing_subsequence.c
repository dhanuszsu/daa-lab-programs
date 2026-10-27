#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n], dp[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        dp[i] = 1;
    }

    int answer = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] <= a[i] && dp[j] + 1 > dp[i])
                dp[i] = dp[j] + 1;
        }

        if (dp[i] > answer)
            answer = dp[i];
    }

    printf("%d\n", answer);
    return 0;
}
