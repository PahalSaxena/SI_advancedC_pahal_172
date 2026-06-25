#include <stdio.h>

int main()
{
    char a[50], b[50];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    while(a[i] == b[i] && a[i] != '\0')
    {
        i++;
    }

    if(a[i] == b[i])
        printf("Strings are same");
    else
        printf("Strings are different");

    return 0;
}