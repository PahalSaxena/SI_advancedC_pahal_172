#include <stdio.h>

int main()
{
    char s1[20], s2[20];
    int i = 0;

    printf("Enter two strings: ");
    scanf("%s %s", s1, s2);

    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;

    if(s1[i] < s2[i])
        printf("%s\n%s", s1, s2);
    else
        printf("%s\n%s", s2, s1);

    return 0;
}