#include<stdio.h>
void main()
{
    int i,gcd,lcm,number1,number2;
    printf("Enter 2 numbers:");
    scanf("%d,%d", &number1, &number2);
    for ( i = 1; i < number1 && i < number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (number1 * number2)/gcd;
    printf("GCD of 2 numbers: %d",gcd);
    printf("\nLCM of 2 numbers: %d",lcm);
}