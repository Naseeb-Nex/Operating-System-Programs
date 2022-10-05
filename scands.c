#include <stdio.h>

int main()
{
    int n, s, head, diff;
    printf("Enter the memory size : ");
    scanf("%d", &s);
    printf("Enter the Current head posistion : ");
    scanf("%d", &head);
    printf("Enter the number of Request : ");
    scanf("%d", &n);
    int req[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &req[i]);
    }
    int small = req[0];
    for (int i = 0; i < n; i++)
    {
        if (small > req[i])
        {
            small = req[i];
        }
    }

    int tst = (s-1) - head + (s-1) - small;
    printf("Total seektime : %d", tst);
    
    return 0;
}