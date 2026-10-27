#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    int bestI = 0, bestJ = 1;
    int bestDiff;

    scanf("%d", &n);

    int skill[n];
    for (i = 0; i < n; i++)
        scanf("%d", &skill[i]);

    bestDiff = abs(skill[0] - skill[1]);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int diff = abs(skill[i] - skill[j]);

            if (diff < bestDiff)
            {
                bestDiff = diff;
                bestI = i;
                bestJ = j;
            }
        }
    }

    printf("Pair: (%d, %d)\n", bestI, bestJ);
    printf("Difference: %d\n", bestDiff);

    return 0;
}
