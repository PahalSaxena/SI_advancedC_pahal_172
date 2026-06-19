#include <stdio.h>

int main()
{
    int days, year, week, day;

    printf("Enter number of days: ");
    scanf("%d", &days);

    year = days / 365;
    days = days % 365;

    week = days / 7;
    day = days % 7;

    printf("Years = %d\n", year);
    printf("Weeks = %d\n", week);
    printf("Days = %d", day);

    return 0;
}