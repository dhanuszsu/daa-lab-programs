#include <stdio.h>

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
}

int main(void)
{
    int n, m;
    scanf("%d", &n);

    int greed[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &greed[i]);

    scanf("%d", &m);

    int cookie[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &cookie[i]);

    sort(greed, n);
    sort(cookie, m);

    int i = 0, j = 0, satisfied = 0;

    while (i < n && j < m)
    {
        if (cookie[j] >= greed[i])
        {
            satisfied++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    printf("%d\n", satisfied);
    return 0;
}
