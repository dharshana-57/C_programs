#include<stdio.h>
void main()
{
    int i,number,a[10];
    printf("Enter number:");
    scanf("%d",&number);
    for ( i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    printf("binary form is ");
    for ( i = i-1; i >= 0; i--)
    {
        printf("%d",a[i]);
    }
    
}