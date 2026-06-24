#include <stdio.h>

int main() {
    int arr[5], i;
    int *p = arr;
    int temp;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    for(i = 0; i < 5 / 2; i++) {
        temp = *(p + i);
        *(p + i) = *(p + 4 - i);
        *(p + 4 - i) = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}