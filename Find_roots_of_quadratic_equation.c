#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
        printf("Two real roots");
    else if (d == 0)
        printf("Equal roots");
    else
        printf("Imaginary roots");

    return 0;
}