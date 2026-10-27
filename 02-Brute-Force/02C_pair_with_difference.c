#include <stdio.h>

int main(void)
{
    int n, k, i, j;

    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i != j && a[j] - a[i] == k)
            {
                printf("1\n");
                return 0;
            }
        }
    }

    printf("0\n");
    return 0;
}
