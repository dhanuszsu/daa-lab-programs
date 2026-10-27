#include <stdio.h>
#include <stdlib.h>

int compareDescending(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main(void)
{
    int n;
    long long distance = 0;

    scanf("%d", &n);

    int calories[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &calories[i]);

    qsort(calories, n, sizeof(int), compareDescending);

    for (int i = 0; i < n; i++)
        distance += (1LL << i) * calories[i];

    printf("%lld\n", distance);
    return 0;
}
