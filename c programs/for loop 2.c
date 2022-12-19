//Write a program to take no from users and seperate a digit and perform the addition.

#include<stdio.h>
main()
{
    int i,n,b,sum=0;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>0)
    {

        b=n % 10;                           //% use for remainder
        sum=sum+b;
        n=n/10     ;                    // / use for division
    }
    printf("%d",sum);
}
