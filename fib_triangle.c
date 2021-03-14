#include<stdio.h>
void main()
{
    int i,n1,n2,nxt,n;
    n1 = 0;
    n2 = 1;
    printf("enter n:");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        n1 = 0;
        n2 = 1;
        printf("%d\t",n2);
        for (int j = 1; j < i; j++)
        {
            nxt = n1 + n2;
            printf("%d\t",nxt);
            n1 = n2;
            n2 = nxt;
        }
        printf("\n");
    }
    
}