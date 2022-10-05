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
    int min = req[0], prediff, mindiff=head, sl;
    for (int i = 0; i < n; i++)
    {
        if (head > req[i])
        {
            diff= head - req[i];
            if(mindiff> diff){
                mindiff = diff;
                sl = req[i];
            }
        }
    }

    int tst = (s-1) - head + (s-1) + sl;
    printf("Total seektime : %d", tst);
    
    return 0;
}