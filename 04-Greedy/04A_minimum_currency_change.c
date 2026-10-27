#include <stdio.h>

int main(void)
{
    int v;
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int count = 0;

    scanf("%d", &v);

    for (int i = 0; i < 9; i++)
    {
        count += v / denominations[i];
        v %= denominations[i];
    }

    printf("%d\n", count);
    return 0;
}
