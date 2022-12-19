//Write a program to take no from users and seperate a digit and perform the multiplication.

#include<stdio.h>
main()
{
    int i,n,b,mul=1;
    printf("Enter a number");
    scanf("%d",&n);

    while(n>0)
    {

        b=n % 10;                           //% use for remainder
        mul=mul*b;
        n=n/10     ;                    // / use for division
    }
    printf("%d",mul);
}

