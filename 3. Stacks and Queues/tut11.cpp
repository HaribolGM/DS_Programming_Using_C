// Program to compute the nth number of Fibonacci series.

// Fibonacci series is given by 0,1,2,3,4,5,8,13,21,.....

#include<stdio.h>

void fibonacci(int);
int main()
{
    int n;
    setbuf(stdout,NULL);
     printf("Enter Range of the fibonacci series:");
    scanf("%d",&n);
    printf("Fibanacci Series:");
    printf("%d\t%d",0,1);
    fibonacci(n);

     return 0;

}

void fibonacci(int n )
{
    static int first=0, second=1,sum;
    if(n>0)
    {
        sum=first+second;
         first=second;
         second=sum;
         printf("\t%d",sum);
         fibonacci(n-1);

    }
}