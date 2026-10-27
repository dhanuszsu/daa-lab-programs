#include <stdio.h>

int peakIndex(int a[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] < a[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Peak Index: %d\n", peakIndex(a, n));
    return 0;
}
