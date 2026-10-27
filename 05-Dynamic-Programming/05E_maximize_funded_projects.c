#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int minFunding;
    int maxFunding;
} Project;

int compareMinimum(const void *a, const void *b)
{
    return ((Project *)a)->minFunding - ((Project *)b)->minFunding;
}

int main(void)
{
    int totalAmount, n;
    scanf("%d", &totalAmount);
    scanf("%d", &n);

    Project projects[n];

    for (int i = 0; i < n; i++)
        scanf("%d %d", &projects[i].minFunding, &projects[i].maxFunding);

    /*
       The manual describes this as a Dynamic Programming problem and asks
       for the maximum number of projects that can receive at least their
       minimum funding without exceeding the available amount.

       Since only the minimum amount is needed to count a funded project,
       the DP below treats each project as an item with cost=minFunding
       and value=1.
    */

    qsort(projects, n, sizeof(Project), compareMinimum);

    int dp[n + 1][totalAmount + 1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= totalAmount; j++)
            dp[i][j] = 0;

    for (int i = 1; i <= n; i++)
    {
        int cost = projects[i - 1].minFunding;

        for (int money = 0; money <= totalAmount; money++)
        {
            dp[i][money] = dp[i - 1][money];

            if (cost <= money)
            {
                int take = dp[i - 1][money - cost] + 1;
                if (take > dp[i][money])
                    dp[i][money] = take;
            }
        }
    }

    printf("%d\n", dp[n][totalAmount]);
    return 0;
}
