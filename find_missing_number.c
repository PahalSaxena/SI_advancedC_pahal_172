#include <stdio.h>

int main()
{
    int a[10], n, i, sum = 0;
    int total;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    total = (n + 1) * (n + 2) / 2;

    printf("Missing number = %d", total - sum);

    return 0;
}