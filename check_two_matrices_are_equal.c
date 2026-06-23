#include <stdio.h>

int main()
{
    int a[10][10], b[10][10];
    int n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    printf("Enter first matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != b[i][j])
            {
                printf("Matrices are not equal");
                return 0;
            }
        }
    }

    printf("Matrices are equal");

    return 0;
}