#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], word[20];
    int count = 0;

    printf("Enter sentence: ");
    scanf(" %[^\n]", str);

    printf("Enter word: ");
    scanf("%s", word);

    char *p = strtok(str, " ");

    while(p != NULL)
    {
        if(strcmp(p, word) == 0)
            count++;

        p = strtok(NULL, " ");
    }

    printf("Frequency = %d", count);

    return 0;
}