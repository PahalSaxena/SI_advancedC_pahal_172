#include<stdio.h>
int main()
{
int r,i,j;
printf("enter number of rows");
scanf("%d",&r);
for(i=0;i<r;i++)
{
for(int j=1;j<r-i;j++)
{
    printf(" ");
}
    for(int j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}