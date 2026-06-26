#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int slow = 0, fast = 0;

    // Creating a loop: 50 points back to 30
    int next[5] = {1, 2, 3, 4, 2};

    while(fast != -1 && next[fast] != -1)
    {
        slow = next[slow];
        fast = next[next[fast]];

        if(slow == fast)
        {
            printf("Loop detected");
            return 0;
        }
    }

    printf("No loop");

    return 0;
}