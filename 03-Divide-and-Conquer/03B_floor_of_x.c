#include <stdio.h>

int floorOfX(int a[], int n, int x)
{
    int low = 0, high = n - 1;
    int answer = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == x)
            return a[mid];

        if (a[mid] < x)
        {
            answer = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return answer;
}

int main(void)
{
    int n, x;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    printf("%d\n", floorOfX(a, n, x));
    return 0;
}
