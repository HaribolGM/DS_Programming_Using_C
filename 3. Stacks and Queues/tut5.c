
// **** Program to reverse a string using stack. *****



#include<stdio.h>
#include<conio.h>
#include<string.h>
char stk[10];
char str[10];
int top = -1;
void push(char ch)
{
    top++;
    stk[top]=ch;
}
    char pop()
    {
        char temp;
         temp = stk[top];
          top--;
          return(temp);
    }

    int main()
    {
        int i,n;
        char z;
        setbuf(stdout, NULL); // turn off buffering of stdout
        printf("Enter the string\n");
        gets(str);
        n = strlen(str);
         for(i=0;i<n;i++)
         push(str[i]);
          printf("The original string is:%s \n",str);
          printf("The Reverse string is: ");
          for(i = top; i>=0;i--)
          {
            z = pop ();
            printf("%c",z);

          }
    return 0;
     
    
    }

    
