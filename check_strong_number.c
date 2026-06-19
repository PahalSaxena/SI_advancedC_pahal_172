#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(n > 0) {
        digit = n % 10;
        fact = 1;

        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(sum == temp)
        printf("Strong number");
    else
        printf("Not a Strong number");

    return 0;
}