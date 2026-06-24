#include <stdio.h>

int main()
{
    int a[5][5], b[5][5], c[5][5];
    int *p, *q, *r;
    int i, j, n;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter first matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &b[i][j]);

    p=&a[0][0];
    q=&b[0][0];
    r=&c[0][0];

    for(i=0;i<n*n;i++)
        *(r+i)=*(p+i)+*(q+i);

    printf("Sum:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}