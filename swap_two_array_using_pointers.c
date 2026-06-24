#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};

    int *p1 = a;
    int *p2 = b;
    int temp;

    for(int i = 0; i < 5; i++)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1++;
        p2++;
    }

    printf("Array a: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\nArray b: ");
    for(int i = 0; i < 5; i++)
        printf("%d ", b[i]);

    return 0;
}