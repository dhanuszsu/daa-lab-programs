#include <stdio.h>

int countOccurrences(int a[], int left, int right, int value)
{
    int count = 0;

    for (int i = left; i <= right; i++)
        if (a[i] == value)
            count++;

    return count;
}

int majority(int a[], int left, int right)
{
    if (left == right)
        return a[left];

    int mid = left + (right - left) / 2;
    int leftMajor = majority(a, left, mid);
    int rightMajor = majority(a, mid + 1, right);

    if (leftMajor == rightMajor)
        return leftMajor;

    int leftCount = countOccurrences(a, left, right, leftMajor);
    int rightCount = countOccurrences(a, left, right, rightMajor);

    return (leftCount > rightCount) ? leftMajor : rightMajor;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d\n", majority(a, 0, n - 1));
    return 0;
}
