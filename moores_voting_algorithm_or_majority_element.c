#include <stdio.h>

int main()
{
    int a[10], n, i;
    int count = 0, candidate;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    candidate = a[0];

    for(i = 0; i < n; i++)
    {
        if(count == 0)
            candidate = a[i];

        if(a[i] == candidate)
            count++;
        else
            count--;
    }

    printf("Majority element = %d", candidate);

    return 0;
}