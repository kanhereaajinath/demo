//WAP to take any digit number and print multiplication of first and last digit

#include<stdio.h>
main()
{
    int i,n,first,last,mul=1;
    printf("Enter a number");
    scanf("%d",&n);

    last=n%10;

    while(n>0)
    {
        first=n%10;
        n=n/10;
    }
   mul=first*last;
        printf("%d\n",mul);


    }


