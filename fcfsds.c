#include <stdio.h>

int main()
{
    int n, diff, tst = 0;
    printf("Enter the no of request : ");
    scanf("%d", &n);
    int req[n + 1];
    printf("Enter the Current head position :");
    scanf("%d", &req[0]);
    printf("Enter the Requests ");
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &req[i]);
        if (req[i] > req[i - 1])
            diff = req[i] - req[i - 1];
        else
            diff = req[i - 1] - req[i];
        tst += diff;
    }
    printf(" Total seek time : %d", tst);

    return 0;
}