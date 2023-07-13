// **** Program to calculate factorial of a given number using  recursion in C.
#include<stdio.h>
#include<conio.h>
int fact (int);
int main()
{
    int num,f;
    setbuf(stdout , NULL); // Turn off buffering stdout
    printf("Enter any Number \n");
   scanf("%d",&num);
     f =fact (num);
     printf("Factorial of a number %d is %d",num,f);
return 0;

}
int fact(int f)
 
{
    if(f==1)
    return f;
    else 
    return f* fact(f-1);

}
