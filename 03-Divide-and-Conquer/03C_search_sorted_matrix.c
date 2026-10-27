#include <stdio.h>

int searchMatrix(int m, int a[m][m], int x)
{
    int low = 0, high = m * m - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int value = a[mid / m][mid % m];

        if (value == x)
            return 1;

        if (value < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return 0;
}

int main(void)
{
    int m, x;
    scanf("%d", &m);

    int a[m][m];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &a[i][j]);

    scanf("%d", &x);

    if (searchMatrix(m, a, x))
        printf("FOUND\n");
    else
        printf("NOT FOUND\n");

    return 0;
}
