 //write a programm from the users and prints its multiplication tables.

 #include<stdio.h>
main()
{
     int i,n,b;

     printf("Enter a number");
     scanf("%d",&n);
     i=1;

    while(i<=10)
    {
        b=n*i;
        printf("\n%d",b);
        i=i+1;

    }


}
