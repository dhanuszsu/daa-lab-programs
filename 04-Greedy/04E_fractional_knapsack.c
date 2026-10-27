#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double weight;
    double value;
    double ratio;
} Item;

int compareRatio(const void *a, const void *b)
{
    double r1 = ((Item *)a)->ratio;
    double r2 = ((Item *)b)->ratio;

    if (r1 < r2) return 1;
    if (r1 > r2) return -1;
    return 0;
}

int main(void)
{
    int n;
    double capacity, totalValue = 0.0;

    scanf("%d", &n);
    scanf("%lf", &capacity);

    Item items[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf %lf", &items[i].weight, &items[i].value);
        items[i].ratio = items[i].value / items[i].weight;
    }

    qsort(items, n, sizeof(Item), compareRatio);

    for (int i = 0; i < n && capacity > 0; i++)
    {
        if (items[i].weight <= capacity)
        {
            totalValue += items[i].value;
            capacity -= items[i].weight;
        }
        else
        {
            totalValue += items[i].ratio * capacity;
            capacity = 0;
        }
    }

    printf("%.2f\n", totalValue);
    return 0;
}
