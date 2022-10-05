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
    int count = 0, tst = 0;
    while (count != n)
    {
        int min = s, loc;
        for (int i = 0; i < n; i++)
        {

            if (head > req[i])
                diff = head - req[i];
            else
                diff = req[i] - head;

            if (min > diff)
            {
                min = diff;
                loc = i;
            }
        }
        tst += min;
        head = req[loc];
        req[loc] = s;
        count++;
        printf(" %d /n", count);
    }
    printf("Total seaktime : %d ", tst);

    return 0;
}