#include <stdio.h>

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Answer = %d", a + b);
            break;

        case 2:
            printf("Answer = %d", a - b);
            break;

        case 3:
            printf("Answer = %d", a * b);
            break;

        case 4:
            printf("Answer = %d", a / b);
            break;

    }

    return 0;
}