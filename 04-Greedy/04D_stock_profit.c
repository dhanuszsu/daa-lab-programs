#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int price[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &price[i]);

    int minPrice = price[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++)
    {
        if (price[i] - minPrice > maxProfit)
            maxProfit = price[i] - minPrice;

        if (price[i] < minPrice)
            minPrice = price[i];
    }

    printf("%d\n", maxProfit);
    return 0;
}
